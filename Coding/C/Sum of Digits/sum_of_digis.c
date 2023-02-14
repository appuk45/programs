#include <stdio.h>
int main()
{
    int num, sum=0, rem, temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum of the digits of %d is : %d",temp,sum);
    return 0;
    
}