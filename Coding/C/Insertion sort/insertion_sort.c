#include <stdio.h>
int main()
{
    int a[100],i,j,n,key;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("Sorted array :\n");;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}