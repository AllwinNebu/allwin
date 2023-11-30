import java.util.Scanner;

public class plaindrome_string {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the word : ");
        String s= sc.nextLine();
        String rev="";
        for(int i = s.length()-1;i>=0;i--)
        {
            rev=rev+s.charAt(i);
        }
        if(s.equals(rev))
        {
            System.out.println("palindrome");
            
        }
        else 
        {
            System.out.println("Not plaindrome");
        }
    }


}
