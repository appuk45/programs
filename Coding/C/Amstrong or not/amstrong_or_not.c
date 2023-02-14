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
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum)
        printf("The number %d is an Amstrong number.",temp);
    else
        printf("The number %d is not an Amstrong number.",temp);
    return 0;
    
}