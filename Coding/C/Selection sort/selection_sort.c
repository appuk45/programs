#include <stdio.h>
int main()
{
    int a[100],i,j,n,loc,min;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
        a[loc]=a[i];
        a[i]=min;
    }
    printf("Sorted array :\n");;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}