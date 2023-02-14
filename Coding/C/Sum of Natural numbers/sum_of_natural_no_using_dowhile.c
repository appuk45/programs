#include <stdio.h>
int main()
{
    int sum,i,num;
    printf("Enter the limit : ");
    scanf("%d",&num);
    i=1,sum=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=num);
    printf("The sum of first %d natural numbers is : %d",num,sum);
    return 0;
}