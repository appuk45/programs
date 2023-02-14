#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int lns1, lns2, i;
    printf("Enter first string : ");
    fgets(s1,100, stdin);
    printf("Enter second string : ");
    fgets(s2,100, stdin);
    lns1=strlen(s1)-1;
    lns2=strlen(s2)-1;
    for(i=0;i<lns2;i++)
    {
        if(s2[i]=='$')
            continue;
        s1[lns1+i-1]=s2[i];
    }
    printf("The concatenated string is : %s",s1);
    return 0;
}