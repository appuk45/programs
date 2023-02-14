#include <stdio.h>
void readmatrix();
void add();
void multiply();
void transpose();
void printmatrix();
int main()
{
    int ch,a[10][10],b[10][10],row1,cols1,row2,cols2;
    int label=1;
    while(label==1)
    {
        printf("\n\n*****************Matrix Menu*****************\n");
        printf("1. Add two matrices\n");
        printf("2. Multiply two matrices\n");
        printf("3. Transpose of a matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        if(ch!=4)
        {
            if (ch==1 || ch==2 || ch==3)
            {
                switch(ch)
                {
                    case 1:
                        printf("Enter the number of rows of matrices : ");
                        scanf("%d",&row1);
                        printf("Enter the number of coloumns of matrices : ");
                        scanf("%d",&cols1);
                        printf("Matrix 1 :\n");
                        readmatrix(a,row1,cols1);
                        printmatrix(a,row1,cols1);
                        printf("Matrix 2 :\n");
                        readmatrix(b,row1,cols1);
                        printmatrix(b,row1,cols1);
                        add(a,b,row1,cols1);
                        break;
                    case 2:
                        printf("Enter the number of rows of matrix 1 : ");
                        scanf("%d",&row1);
                        printf("Enter the number of coloumns of matrix 1 : ");
                        scanf("%d",&cols1);
                        printf("Enter the number of rows of matrix 2 : ");
                        scanf("%d",&row2);
                        printf("Enter the number of coloumns of matrix 2 : ");
                        scanf("%d",&cols2);
                        printf("Matrix 1 :\n");
                        readmatrix(a,row1,cols1);
                        printmatrix(a,row1,cols1);
                        printf("Matrix 2 :\n");
                        readmatrix(b,row2,cols2);
                        printmatrix(b,row2,cols2);
                        multiply(a,b,row1,cols1,row2,cols2);
                        break;
                    case 3:
                        if (cols1==row2)
                        {
                            printf("Enter the number of rows of matrices : ");
                            scanf("%d",&row1);
                            printf("Enter the number of coloumns of matrices : ");
                            scanf("%d",&cols1);
                            readmatrix(a,row1,cols1);
                            printmatrix(a,row1,cols1);
                            transpose(a,row1,cols1);
                        }
                        else
                        {
                            printf("The number of coloumns of first matrix should be equal to number of rows of seccond matrix\n");
                        }
                        break;
                    default:
                        break;
                }
            }
            else
            {
                printf("\nInvalid choice!!!");
            }   
        }
        else
        {
            break;
        }
    }
    printf("\n\nThank You :)");
    return 0;
}

void readmatrix(int a[10][10], int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element (%d,%d) of matrix: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
}

void printmatrix(int m1[10][10],int r,int c)
{
    int i,j;
    printf("The entered matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
}
void add(int a[10][10],int b[10][10],int r,int c)
{
    int i,j,m[10][10];
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            m[i][j]=a[i][j]+b[i][j];
        }    
    }
    printf("The sum of entered matrices is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n"); 
    }
}

void multiply(int a[10][10],int b[10][10],int r1,int c1, int r2, int c2)
{
    int i,j,k,m[10][10];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            m[i][j]=0;
            for (k=0;k<c1;k++)
            {
                m[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix 1 * Matrix 2 is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n"); 
    }
}

void transpose(int a[10][10],int r,int c)
{
    int i,j,t[10][10];
    printf("The transpose of the above matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("Tranpose of the entered matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n"); 
    }
}
