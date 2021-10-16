import java.util.Scanner;
public class Salary
{
    public String name;
    public float salary;
    public float da;
    public float hra;
    public float gross;
    public int age;

    public void inputing()
    
    {
         Scanner sc = new Scanner (System.in);

         System.out.println("Enter your name ");
         this.name=sc.nextLine();

         System.out.println("Enter your age");
         this.age=sc.nextInt();

         System.out.println("Enter your salary");
         this.salary=sc.nextFloat();

         sc.close();       
    }

    public void calculate()

    {
        this.da = 15*this.salary/100;
        this.hra = 10*this.salary/100;
        this.gross = this.salary + this.hra + this.da ;
    }

    public void outputing()

    {
        System.out.println("WELCOME TO CFS IT COMPANY WORKER IMFORMATION PAGE");
        System.out.println("Name : " + this.name);
        System.out.println("Working in CFS IT company");
        System.out.println("Your age is : " + this.age);
        System.out.println("Your salary is : " + this.salary);
        System.out.println("Your D.A is : " + this.da);
        System.out.println("Your H.R.A is : " + this.hra);
        System.out.println("Your gross salary : " + this.gross);
    }
     
    public static void main(String args[])

    {
        Salary ob = new Salary ();
        ob.inputing();
        ob.calculate();
        ob.outputing();
    }

}
