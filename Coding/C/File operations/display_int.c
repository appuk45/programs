#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    FILE *fptr;
    if ((fptr = fopen("D:\\Coding\\C\\File operations\\Text files\\write_int.txt","r")) == NULL)
    {
        printf("Error...!!!");
        exit(0);
    }
    fscanf(fptr,"%d",&a);
    printf("The integer inside the file is : %d",a);
    fclose(fptr);
    return 0;
}