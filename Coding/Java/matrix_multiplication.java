import java.util.Scanner;
class matrix_multiplication
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter no. of rows of matrix 1  : ");
        int row1=sc.nextInt();
        System.out.println("Enter no. of columns of matrix 1  : ");
        int cols1=sc.nextInt();
        System.out.println("Enter no. of rows of matrix 2  : ");
        int row2=sc.nextInt();
        System.out.println("Enter no. of columns of matrix 2  : ");
        int cols2=sc.nextInt();
        if(row2!=cols1)
        {
            System.out.println("Matrix multiplication not possible");
        }
        else
        {
            int i=0,j=0;
            int a[][]=new int [row1][cols1];
            int b[][]=new int [row2][cols2];
            int c[][]=new int [row1][cols2];
            System.out.println("Enter the elements of matrix 1 : ");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<cols1;j++)
                    a[i][j]=sc.nextInt();
            }
            System.out.println("Enter the elements of matrix 2 : ");
            for(i=0;i<row2;i++)
            {
                for(j=0;j<cols2;j++)
                    b[i][j]=sc.nextInt();
            }
            for(i=0;i<row1;i++)
            {
                for(j=0;j<cols2;j++)
                {
                    for(int k=0;k<row2;k++)
                        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
            System.out.println("matrix 1 * matrix 2 =");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<cols2;j++)
                    System.out.println(c[i][j]+" ");
                System.out.println("\n");
            }
        }
    }
}

