#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n,count=0,i;
    printf("Enter a string : ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if (s[i]==s[n-1-i])
        {
            count=count+1;
        }
    }
    if(count==i)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
    return 0;
}