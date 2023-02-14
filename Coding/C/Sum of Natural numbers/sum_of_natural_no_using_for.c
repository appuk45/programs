#include <stdio.h>
int main()
{
    int sum,i,num;
    printf("Enter the limit : ");
    scanf("%d",&num);
    for(i=1,sum=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is : %d",num,sum);
    return 0;
}