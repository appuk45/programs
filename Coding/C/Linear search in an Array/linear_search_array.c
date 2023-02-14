#include <stdio.h>
int main()
{
    int a[100],i,n,sum=0,num,flag=0;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&a[i-1]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("The element %d was found in the location %d.",num,i+1);
    else
        printf("Element not found");
    return 0;
}