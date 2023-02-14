#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[50];
    int rno, mark;
    FILE *fptr;
    fptr = fopen("D:\\Coding\\C\\File operations\\Text files\\std_details.txt","a+");
    if (fptr == NULL)
    {
        printf("Error...!!!");
        exit(0);
    }
    printf("Enter roll no : ");
    scanf("%d",&rno);
    fprintf(fptr,"Roll no : %d\n",rno);
    printf("Enter name : ");
    scanf("%s",&name);
    fprintf(fptr,"Name : %s\n",name);
    printf("Enter mark : ");
    scanf("%d",&mark);
    fprintf(fptr,"Marks : %d\n\n",mark);
    return 0;
}