#include <stdio.h>
int main()
{
    int num, rev=0, rem, temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(temp==rev)
        printf("The number %d is a palondrome.",temp);
    else
        printf("The number %d is not a palindrome.",temp);
    return 0;
    
}