#include <stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a,b;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    printf("The sum of the numbers is : %d",a+b);
}