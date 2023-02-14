#include <stdio.h>
int main()
{
    int a[10],i,largest;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2 != 0)
        {
           printf("%d",a[i]);
           if(a[i] > a[i-1])
           {
               largest=a[i];
           }
           else
           {
               largest=a[i-1];
           }
        }
    }
    printf("The largest odd number is : %d", largest);
    return 0;
}