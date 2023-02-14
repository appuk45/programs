#include <stdio.h>
int main()
{
    int n,s,i,flag=0;
    printf("Enter the size of the arrau : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Element was found at position : %d\n",i+1);
    else
        printf("Element not found");
    return 0;
}