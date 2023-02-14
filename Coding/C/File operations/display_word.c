#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a;
    FILE *fptr;
    if ((fptr = fopen("D:\\Coding\\C\\File operations\\Text files\\write.txt","r")) == NULL)
    {
        printf("Error...!!!");
        exit(0);
    }
    fscanf(fptr,"%c",&a);
    printf("The word inside the file is : %c",a);
    fclose(fptr);
    return 0;
}