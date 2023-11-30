
import java.util.Scanner;
import java.lang.*;
public class Inheritance1 {

	public static void main(String args[])
    
	{
        String name,address,specialization,department;
        int age;
        long phonenumber;
        float salary;
        Scanner s=new Scanner(System.in);
        System.out.println("ENTER OFFICER DETAILS :");
        System.out.print("NAME : ");
        name=s.nextLine();
        System.out.print("ADDRESS : ");
        address=s.nextLine();
        System.out.print("AGE : ");
        age=s.nextInt();
        System.out.print("PHONE NUMBER : ");
        phonenumber=s.nextLong();
        System.out.print("SPECIALIZATION : ");
        specialization=s.next();
        System.out.print("SALARY : ");
        salary=s.nextFloat();
        Officer of=new Officer(name,address,age,phonenumber,salary,specialization);
        of.displayDetails();
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER MANAGER DETAILS :");
        System.out.print("NAME : ");
        name=sc.nextLine();
        System.out.print("ADDRESS : ");
        address=sc.nextLine();
        System.out.print("AGE : ");
        age=sc.nextInt();
        System.out.print("PHONE NUMBER : ");
        phonenumber=sc.nextLong();
        System.out.print("DEPARTMENT : ");
        department=sc.next();
        System.out.print("SALARY : ");
        salary=sc.nextFloat();
        Manager mn=new Manager(name,address,age,phonenumber,salary,department);
        mn.displayDetails();
        
	}

}

class Employee
{
	String name,address;
	int age;
	long phonenumber;
	float salary;
	Employee(String name,String address,int age,long phonenumber,float salary)
	{
		this.name=name;
		this.address=address;
		this.age=age;
		this.phonenumber=phonenumber;
		this.salary=salary;
	}
		public void display()
		{
			System.out.println("DETAILS :");
	 		System.out.println("NAME : "+name+"\nADDRESS : "+address+"\nAGE : "+age+"\nPHONE NUMBER : "+phonenumber);
		}
        public void printSalary()
    		{
        		System.out.println("SALARY : "+salary);
    		}
   
}
class Officer extends Employee
{
	String specialization;
	Officer(String name,String address,int age,long phonenumber,float salary,String specialization)
	{
		super(name,address,age,phonenumber,salary);    
		this.specialization=specialization;

	}
	void displayDetails()
			{
				System.out.println("OFFICER DETAILS : ");
				super.display();		
				System.out.println("SPECIALIZATION : "+specialization);
				super.printSalary();
	}	
	
}
class Manager extends Employee
{
	String department;
	Manager(String name,String address,int age,long phonenumber,float salary,String department)
	{
		super(name,address,age,phonenumber,salary);		
		this.department=department;
	}
		void displayDetails()
			{
				System.out.println("MANAGER DETAILS :");
				super.display();
				System.out.println("DEPARTMENT : "+department);
				super.printSalary();
			}	
		
	
}



