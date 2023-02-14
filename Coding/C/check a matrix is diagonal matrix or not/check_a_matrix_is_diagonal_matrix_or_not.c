#include <stdio.h>
int main()
{
    int m[20][20],row,i,j,flag=0;
    printf("Enter the number of rows or cols : ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("Enter the element (%d,%d) : ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",m[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if (i!=j && m[i][j] != 0)
            {
                flag=1;
                goto result;
            }
        }
    }
    result:
       {
            if(flag==1)
                printf("The matrix is not a diagonal matrix.");
            else
                printf("The matrix is  a diagonal matrix.");
       }
    return 0;
}