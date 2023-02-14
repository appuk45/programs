#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("D:\\Coding\\C\\write a text file\\program.txt","w");
    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a number : ");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}