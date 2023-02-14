#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a;
    FILE *fptr;
    fptr = fopen("D:\\Coding\\C\\File operations\\Text files\\write.txt","w");
    if (fptr == NULL)
    {
        printf("Error...!!!");
        exit(0);
    }
    printf("Enter a word : ");
    scanf("%c",&a);
    fprintf(fptr,"%c",a);
    return 0;
}