#include <stdio.h>
int reverse(int);
int main()
{
    int num,rev;
    printf("Enter a number : ");
    scanf("%d",&num);
    rev=reverse(num);
    printf("The reverse of the number %d is : %d",num,rev);
    return 0;
}

int reverse(int x)
{
    int temp,rem,r;
    temp=x;
    while (x!=0)
    {
        rem=x%10;
        r=(r*10)+rem;
        x=x/10;
    }
    return r;
}