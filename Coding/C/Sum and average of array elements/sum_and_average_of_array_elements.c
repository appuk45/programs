#include <stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&a[i-1]);
        sum=sum+a[i-1];
    }
    avg=sum/n; 
    printf("The sum of the array is : %d",sum);
    printf("\nThe average of the array is : %f",avg);
    return 0;
}