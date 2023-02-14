#include <stdio.h>
int factorial(int n);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The factorial of %d is : %d", num, factorial(num) );
    return 0;
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}