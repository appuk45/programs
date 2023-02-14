#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char opcode[20],operand[20],symbol[20],label[20],code[20],mnemonic[25], character,
  add[20],objectcode[20];
  int flag,flag1,locctr,location,loc;
  FILE *finter,*fout,*fop,*fsym;
  finter = fopen("intermediate.txt", "r");
  fout = fopen("objectcode.txt", "w");
  fop = fopen("opcode.txt", "r");
  fsym = fopen("symtab.txt", "r");
  fscanf(finter, "%s%s%s", label, opcode, operand);
  if(strcmp(opcode,"START")==0){
    fprintf(fout, "%s\t%s\t%s\n", label, opcode, operand);
    fscanf(finter, "%x%s%s%s", &locctr, label, opcode, operand);
  }
  while(strcmp(opcode, "END")!=0){
    flag=0;
    fscanf(fop, "%s%s", code, mnemonic);
    while(fgetc(fop)!=EOF){
        if((strcmp(opcode,code)==0) && (strcmp(mnemonic, "*")!=0)){
            flag=1;
            break;
        }
        fscanf(fop, "%s%s", code, mnemonic);
    }
    if(flag==1){
        flag1=0; rewind(fsym);
        while(!feof(fsym)){
            fscanf(fsym, "%x%s", &locctr, symbol);
            if(strcmp(symbol,operand)==0){
                flag1=1; break;
            }
        }
        if(flag1==1){
            sprintf(add, "%x", locctr);
            strcpy(objectcode,strcat(mnemonic,add));
        }
    }
    else if(strcmp(opcode,"BYTE")==0 || strcmp(opcode,"WORD")==0){
        if((operand[0]=='C') || (operand[0]=='X')){
            character=operand[2];
            sprintf(add,"%d",character);
            strcpy(objectcode,add);
        }
        else{
            strcpy(objectcode,operand);
        }
    }
    else{
        strcpy(objectcode,"\0");
    }
    fprintf(fout,"%s\t%s\t%s\t%x\t%s\n",label,opcode,operand,locctr,objectcode);
    fscanf(finter,"%x%s%s%s",&locctr,label,opcode,operand);
  }
  fprintf(fout,"%s\t%s\t%s\t%x\n",label,opcode,operand,locctr);
  fclose(finter);
  fclose(fout);
  fclose(fop);
  fclose(fsym);
}