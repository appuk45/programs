import java.util.Scanner;
class test
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String str=sc.nextLine();
        int len=str.length();
        int flag=0;
        for(int i=0;i<len/2;i++)
        {
            if(str.charAt(i)!=str.charAt(len-i-i))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            System.out.println("Palindrome");
        else
            System.out.println("Not palindrome");
    }
}