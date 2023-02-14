#include <stdio.h>
void swap();
int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("\nBefore swapping...\nNum 1 = %d",num1);
    printf("\nNum 2 = %d",num2);
    swap(&num1,&num2);
    printf("\n\nAfter swapping...\nNum 1 = %d",num1);
    printf("\nNum 2 = %d",num2);
    return 0;
}

void swap(int *a, int *b )
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}