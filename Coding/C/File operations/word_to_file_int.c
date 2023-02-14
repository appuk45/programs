#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    FILE *fptr;
    fptr = fopen("D:\\Coding\\C\\File operations\\Text files\\write_int.txt","w");
    if (fptr == NULL)
    {
        printf("Error...!!!");
        exit(0);
    }
    printf("Enter an integer : ");
    scanf("%d",&a);
    fprintf(fptr,"%d",a);
    return 0;
}