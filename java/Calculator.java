import java.util.Scanner;
public class Calculator
{
    public static void main(String[] args)
    {
        double num1, num2;
  
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the operator (+,-,*,/)");
        char choice = sc.next().charAt(0);
  
        System.out.println("Enter the numbers");
        num1 = sc.nextDouble();
        num2 = sc.nextDouble();
        
        double o = 0;
        
        switch (choice)
         {
             case '+':
                 o = num1 + num2;
                 System.out.println(o);
                 break;
  
             case '-':
                 o = num1 - num2;
                 System.out.println(o);
                 break;
  
             case '*':
                 o = num1 * num2;
                 System.out.println(o);
                 break;
  
            case '/':
                 o = num1 / num2;
                 System.out.println(o);
                 break;
  
             default:
                 System.out.println("You enter wrong input");
    
        }
        sc.close();
    }
}
