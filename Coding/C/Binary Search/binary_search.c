#include <stdio.h>
int main()
{
    int i,j,a[100],n,temp,e;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for (j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    int beg=0,end=n,mid=(beg+end)/2;
    printf("Enter the element to be searched : ");
    scanf("%d",&e);
    while(beg<=end && a[mid]!=e)
    {
        if(e<a[mid])
            end=mid-1;
        else    
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==e)
        printf("Element was found at the position : %d\n",mid+1);
    else
        printf("Element not found\n");
    return 0;
}