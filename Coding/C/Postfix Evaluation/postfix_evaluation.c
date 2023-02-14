#include <stdio.h>
#include <ctype.h>
int stack[20];
int top=-1;
void push(int x)
{
    top=top+1;
    stack[top]=x;
}
char pop(char x)
{
    if(top==-1)
        return;
    else
    {
        int a=stack[top-1];
        int b=stack[top];
        top=top-1;
        if(x=='+')
            stack[top]=a+b;
        else if(x=='-')
            stack[top]=a-b;
        else if(x=='*')
            stack[top]=a*b;
        else if(x=='/')
            stack[top]=a/b;
        else
            stack[top]=a^b;
    }
}
int main()
{
    char exp[20],*e;
    printf("Enter the postifx expression : ");
    scanf("%s",exp);
    e=exp;
    printf("The evaluation of the postfix expression is : ");
    while(*e!='\0')
    {
        if(isalnum(*e))
            push(*e-48);
        else
            pop(*e);
        e=e+1;
    }
    printf("%d\n",stack[top]);
    return 0;
}