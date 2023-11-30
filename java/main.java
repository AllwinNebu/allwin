



class Employee {
    String Name;
    int Age;
    String PhoneNumber;
    String Address;
    double Salary;

    public void printSalary() {
        System.out.println("Salary: " + Salary);
    }
}

class Officer extends Employee {
    String Specialization;

    public Officer(String name, int age, String phoneNumber, String address, double salary, String specialization) {
        Name = name;
        Age = age;
        PhoneNumber = phoneNumber;
        Address = address;
        Salary = salary;
        Specialization = specialization;
    }
}

class Manager extends Employee {
    String Department;

    public Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
        Name = name;
        Age = age;
        PhoneNumber = phoneNumber;
        Address = address;
        Salary = salary;
        Department = department;
    }
}


public class main {
    public static void main(String[] args) {
        Officer officer = new Officer("John Doe", 30, "123-456-7890", "123 Main St", 60000.0, "IT");
        Manager manager = new Manager("Jane Smith", 35, "987-654-3210", "456 Elm St", 80000.0, "Finance");
        System.out.println("Officer Details:");
        System.out.println("Name: " + officer.Name);
        System.out.println("Age: " + officer.Age);
        System.out.println("Phone Number: " + officer.PhoneNumber);
        System.out.println("Address: " + officer.Address);
        officer.printSalary();
        System.out.println("Specialization: " + officer.Specialization);

        System.out.println("\nManager Details:");
        System.out.println("Name: " + manager.Name);
        System.out.println("Age: " + manager.Age);
        System.out.println("Phone Number: " + manager.PhoneNumber);
        System.out.println("Address: " + manager.Address);
        manager.printSalary();
        System.out.println("Department: " + manager.Department);
    }
}
