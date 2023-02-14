#include <stdio.h>
int main()
{int ar[100],n,swap,i,j;
printf("enter the size of the array : ");
scanf("%d",&n);
printf("enter the elements :\n");
for(i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
for(i=0;i<(n-1);i++)
{
    for (j=0;j<(n-i-1);j++)
    {
        if(ar[j]>ar[j+1])
        {
            swap=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=swap;
        }
    }
}
printf("The sorted array is :\n");
for(i=0;i<n;i++)
{
    printf("%d\t",ar[i]);
}
return 0;
}