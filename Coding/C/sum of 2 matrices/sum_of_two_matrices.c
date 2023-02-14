#include <stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],row,cols,i,j;
    printf("Enter the number of rows of matrices : ");
    scanf("%d",&row);
    printf("Enter the number of coloumns of matrices : ");
    scanf("%d",&cols);
    //Inputing matrix 1
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter the element (%d,%d) of matrix 1: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    //Inputing matrix 2
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter the element (%d,%d) of matrix 2 : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    //Printing matrix 1
    printf("Matrix 1 is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }

    //Printing matrix 2
    printf("Matrix 2 is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",b[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }

    //Adding the two matrices
    for(i=0;i<row;i++)
    {
        for (j=0;j<cols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }    
    }
    
    //Printing the resultant matrix
    printf("Matrix 1 + matrix 2 is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",c[i][j]);
            if(j==row-1)
                printf("\n");
        }
    }
    return 0;
}