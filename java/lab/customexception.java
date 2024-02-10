import java.util.Scanner;

class YourAreNotStudentException extends Exception
{
    YourAreNotStudentException()
    {
        super("You are not a student of CY ");
    }

}

class Check
{
   void cheek(int n) throws YourAreNotStudentException
   {
     if (n!=2)
     {
        throw new YourAreNotStudentException();
     }
   }

}

public class customexception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter : \n 1.AD \n 2.CY \n 3.CS ");
        int cho=sc.nextInt();
        Check c= new Check();
        try
        {
            c.cheek(cho);
        }
        catch(YourAreNotStudentException a)
        {
            System.out.println(a);
        }
        finally
        {

        }
        sc.close();
    }
    
}
