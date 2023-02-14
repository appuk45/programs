#include <stdio.h>
int main()
{
    int num1, num2, *n1, *n2, sum;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    n1= &num1;
    n2= &num2;
    sum = *n1 + *n2;
    printf("The sum of the numbers is : %d", sum);
    return 0;
}