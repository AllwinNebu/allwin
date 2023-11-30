

import java.util.*;

class Employee

{

 String Name;

 int Age;

 long Phone_number;

 String Address;

 int Salary;

 

 void PrintSalary()

 {

  System.out.println("The salary : " + Salary);

 }

}

 class Officer extends Inheritance1

 {

  String Specialization;

  public Officer(String name, int age , long phone_number , String address ,int salary, String specialization)

  {

   Name = name;

   Age = age;

   Phone_number=phone_number;

   Address=address;

   Salary = salary;

   Specialization = specialization;

  }

 }

 

 class Manager extends Inheritance1

 {

  String Department;

  public Manager(String name, int age , long phone_number , String address ,int salary, String department)

  {

   Name = name;

   Age = age;

   Phone_number=phone_number;

   Address=address;

   Salary = salary;

   Department = department;

  }

 }

 

 class Inheritance

 {

   public static void main(String args[])

   {

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the the Officer details ");

    

    System.out.println("Enter the Name : ");

    String name = sc.nextLine();

    

    System.out.println("Enter the Age : ");

    int age=sc.nextInt();
    sc.nextLine();

    

    System.out.println("Enter the Address : ");

    String address=sc.nextLine();

    

    System.out.println("Enter the Phone Number : ");

    long phone_number=sc.nextLong();

    

    

    System.out.println("Enter the Salary : ");

    int salary=sc.nextInt();

    

    System.out.println("Enter the Specialization : ");
    sc.nextLine();
    String specialization=sc.nextLine();

    

    Officer of= new Officer(name,age,phone_number,address,salary,specialization);

    

          System.out.println("Enter the the Manager details ");

    

    System.out.println("Enter the Name : ");

    String name1 = sc.nextLine();

    

    System.out.println("Enter the Age : ");

    int age1=sc.nextInt();

    sc.nextLine();

    System.out.println("Enter the Address : ");

    String address1=sc.nextLine();

    

    System.out.println("Enter the Phone Number : ");

    long phone_number1=sc.nextLong();

    

    System.out.println("Enter the Salary : ");

    int salary1=sc.nextInt();

    

    System.out.println("Enter the department  : ");
    sc.nextLine();
    String department=sc.nextLine();

    

    Manager mg= new Manager(name1,age1,phone_number1,address1,salary1,department);

    

    System.out.println("Officer detail");

    System.out.println("Name : " +of.Name);

    System.out.println("Age : "+ of.Age);

    System.out.println("Phone number : "+of.Phone_number);

    System.out.println("Address : "+of.Address);

    System.out.println("Salary : "+of.Salary);

    System.out.println("Specilization : " + of.Specialization);

    

    System.out.println("Manager detail");

    System.out.println("Name : " +mg.Name);

    System.out.println("Age : "+ mg.Age);

    System.out.println("Phone number : "+mg.Phone_number);

    System.out.println("Address : "+mg.Address);

    System.out.println("Salary : "+mg.Salary);

    System.out.println("Specilization : " + mg.Department);   

   }

 }