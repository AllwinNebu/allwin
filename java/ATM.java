import java.util.Scanner;
public class ATM {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        double balance=100000;
        double withdraw, deposit;
        System.out.println("Enter  choice : ");
        System.out.println("1. Check the balance \n 2. Withdraw balance \n 3. Deposit  \n 4. exit");
        int cho=sc.nextInt();
        if (cho==1)
        System.out.println("Your balance : " + balance  +"\n");
        else if ( cho==2)
        {
            System.out.println("Enter the amount to withdraw : ");
            withdraw=sc.nextDouble();
            balance=balance-withdraw;
            System.out.println("New balance : " + balance + "\n");
        }
        else if (cho==4)
        {
            
        }
        else {
            System.out.println("Enter the amount to deposit : ");
            deposit=sc.nextDouble();
            balance=balance+deposit;
            System.out.println("New balance : " + balance+ "\n");
        }

    }
}
