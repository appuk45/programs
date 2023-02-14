#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],c;  
    int len,i,count=0;
    printf("Enter  the string : ");
    gets(s);
    printf("Enter the character to be searched: ");
    c=getchar();
    len=strlen(s);   
    for(i=0;i<len;i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
	printf("The character '%c' occurs %d times in the string\n ",c,count);
    return 0;
}