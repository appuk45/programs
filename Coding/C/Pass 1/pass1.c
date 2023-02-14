#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fop, *finput, *fout, *fsymtab, *flen;
int o=-1, s=-1, i=0,opd, locctr, start, size=0, flag, len;
char opcode[10], operand[10], label[10], t1[10], t2[10], t3[10];

struct optab{
    char opcode[10], hexcode[10];
}OT[30];

struct symtab{
    char label[10];
    int addr;
}ST[30];

void read_optab(){
    while(1){
        o++;
        // write opcode to structure opcode along with hex code
        fscanf(fop, "%s%s", OT[o].opcode, OT[o].hexcode);
        if(getc(fop)==EOF) break;
    }
}

void read_line(){
    strcpy(t1, "");
    strcpy(t2, "");
    strcpy(t3, "");

    fscanf(finput, "%s", t1);

    if(getc(finput)!='\n'){
        fscanf(finput, "%s", t2);
        if(getc(finput)!='\n'){
            fscanf(finput, "%s", t3);
        }
    }

    if(strcmp(t1,"")!=0 && strcmp(t2,"")!=0 && strcmp(t3,"")!=0){
        strcpy(label, t1);
        strcpy(opcode, t2);
        strcpy(operand, t3);
    }
    else if(strcmp(t1,"")!=0 && strcmp(t2,"")!=0 && strcmp(t3,"")==0){
        strcpy(label, "");
        strcpy(opcode, t1);
        strcpy(operand, t2);
    }else if(strcmp(t1,"")!=0 && strcmp(t2,"")==0 && strcmp(t3,"")==0){
        strcpy(label, "");
        strcpy(opcode, t1);
        strcpy(operand, "");
    }

}

int main(){
    finput = fopen("input.txt", "r");
    fop = fopen("opcode.txt", "r");
    fsymtab = fopen("symtab.txt", "w");
    fout = fopen("intermediate.txt", "w");
    flen = fopen("length.txt", "w");
    
    //write opcode to structure opcode
    read_optab(); 

    //read first line from input file
    fscanf(finput,"%s%x",opcode,&opd); 

    if(strcmp(opcode, "START")==0){
        start = opd;
        locctr = start;
        //write first line to intermediate file
        fprintf(fout, "\t\t%s\t%x\n", opcode, opd);
        // read second line
        read_line(); 
    }else{
        locctr = 0;
    }

    while(strcmp(opcode, "END")!=0){
        // write line to intermediate file
        fprintf(fout, "%x\t%s\t%s\t%s\n", locctr, label, opcode, operand);

        // check if there is label
        if(strcmp(label, "")!=0){
            for(i=0; i<=s;i++){
                if(strcmp(ST[i].label, label)==0){
                    printf("Error");
                    exit(0);
                }
            }
            s++;
            strcpy(ST[s].label, label);
            ST[s].addr = locctr;
        }

        // search for opcode in optab
        flag = 0;
        for(i=0; i<=o; i++){
            // if opcode in optab
            if(strcmp(OT[i].opcode, opcode)==0){
                locctr += 3;
                size += 3;
                flag = 1;
                break;
            }
        }
        // if opcode not in optab
        if(flag==0){
            if(strcmp(opcode, "WORD")==0){
                locctr += 3;
                size += 3;
                printf("hi");
            }else if(strcmp(opcode, "RESW")==0){
                locctr += (3*atoi(operand));
                printf("hi1");
            }else if(strcmp(opcode, "RESB")==0){
                locctr += (atoi(operand));
                printf("hi2");
            }else if(strcmp(opcode, "BYTE")==0){
                len = strlen(operand);
                if(operand[0]=='C' || operand[0]=='c'){
                    len -= 3;
                    printf("hi3");
                }else{
                    len = (len-3)/2;
                }
                locctr += len;
                size += len;
            }
        }

        // read next line
        read_line();

    }

    // write last line to intermediate file
    fprintf(fout, "%x\t%s\t%s\t%s\n", locctr, label, opcode, operand);

    for(i=0; i<=s; i++){
        fprintf(fsymtab, "%s\t%x", ST[i].label, ST[i].addr);
        if (i!=s){
            fprintf(fsymtab, "\n");
        }
    }

    fprintf(flen, "%x\t%x", locctr-start, size);

    fclose(finput);
    fclose(fop);
    fclose(fsymtab);
    fclose(fout);
    fclose(flen);
}