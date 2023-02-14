#include <stdio.h>
#include <string.h>
void reverse(char []);
int main()
{
    char s[100];
    printf("Enter a string : ");
    gets(s);
    reverse(s);
    return 0;
}

void reverse(char str[100])
{
    int len,i;
    len=strlen(str);
    printf("The reverse of the string is : ");
    for(i=len;i!=-1;i--)
    {
        printf("%c",str[i]);
    }
}