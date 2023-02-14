#include <stdio.h>
int main()
{
    int m[20][20],t[20][20],row,cols,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of coloumns : ");
    scanf("%d",&cols);
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter the element (%d,%d) : ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",m[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            t[j][i]=m[i][j];
        }
    }
    printf("The transpose of the above matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",t[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }
    return 0;
}