import java.util.*;
class exception
{
    public static void main (String args[])
    {
        Scanner sc=new Scanner (System.in);
        try
        {
            System.out.print("Enter a number : ");
            int a =sc.nextInt();
            System.out.print("Enter another number : ");
            int b=sc.nextInt();
            System.out.println("a/b = "+a/b);
        }
        catch(ArithmeticException e )
        {
            System.out.println("Error !!!");
        }
        finally
        {
            System.out.println("End of program");
        }
    }
}