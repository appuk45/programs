import java.util.Scanner;
class freq_of_char
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a string : ");
        String str=sc.nextLine();
        System.out.println("Enter a character : ");
        char ch=sc.nextLine().charAt(0);
        int count=0;
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            if(str.charAt(i)==ch)
            {
                count=count+1;
            }
        }
        System.out.println("The occurence of the character '"+ch+"' is "+count+" times");
    }
}