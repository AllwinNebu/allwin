package aal_10;
import java.util.*;
class Employee
{
	double salary;
	double da;
	double hra;
	
	void display()
	{
		System.out.println("..........EMPLOYEE........");
	}
	 
	Employee(double salary, double da,double hra)
	{
		this.salary=salary;
		this.da=da;
		this.hra=hra;
	}
	
	double calsalary()
	{
		salary=(salary+((salary*da)/100)+((salary*hra)/100));
		return salary;
	}
}
class Engineer extends Employee
 {
	 Engineer(double  salary,double  da , double  hra)
	 {
		 super(salary,da,hra);
	 }
	 
	 void display()
	 {
		super.display(); 
		double sal=super.calsalary();
		System.out.println("Gross salary of the Employee : " + sal);
		System.out.println(".......ENGINEER.......");
		double sal2= super.calsalary();
		sal2=2*sal2;
		System.out.println("Gross salary of the Engineer : " + sal2);
	 }
 }
 class SuperAndOverride {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Information");
        System.out.println("Enter the Salary : ");
        double  salary=sc.nextDouble();
        System.out.println("Enter the DA :  ");
        double  da=sc.nextDouble();
        System.out.println("Enter the HRA : ");
        double hra= sc.nextDouble();
        Engineer ob=new Engineer(salary,da,hra);
        ob.display();
        sc.close();
	}

}
