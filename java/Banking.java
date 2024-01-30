

import java.util.Scanner;

class InsufficientFundsException extends Exception{
	private static final long serialVersionUID = 1L;

	InsufficientFundsException(){
		super("Not enough funds in account.");
	}
}

class InvalidAmountException extends Exception{
	private static final long serialVersionUID = 1L;

	InvalidAmountException(){
		super("Cannot deposit/withdraw amount less than 0.");
	}
}

class BankAccount{
	private double amount;
	public int accountNumber;
	private String username, password;
	private static Scanner scanner = new Scanner(System.in);
	
	BankAccount(String username, String password, int accountNumber){
		this.username = username;
		this.password = password;
		this.amount = 0.0;
		this.accountNumber = accountNumber;
	}
	
	public static BankAccount createAccount() {
		
		System.out.println("Enter account number: ");
		int accountNumber = scanner.nextInt();
		scanner.nextLine();
		
		System.out.println("Enter username: ");
		String username = scanner.nextLine();
		
		System.out.println("Enter password: ");
		String password = scanner.nextLine();
		
		return new BankAccount(username, password, accountNumber);
	}
	
	public String toString() {
		return String.format("username: %s\namount: %f", username, amount);
	}
	
	public void deposit(double amount) throws InvalidAmountException{
		if(amount <= 0) {
			throw new InvalidAmountException();
		}
		this.amount += amount;
	}
	
	public double withdraw(double amount) throws InsufficientFundsException, InvalidAmountException{
		if(amount <= 0) {
			throw new InvalidAmountException();
		}
		
		if(this.amount < amount) {
			throw new InsufficientFundsException();
		}
		
		this.amount -= amount;
		return this.amount;
	}
	
}

public class Banking {
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		boolean exit = false;
		
		System.out.println("Enter number of accounts: ");
		int num = scanner.nextInt();
		scanner.nextLine();
		
		BankAccount[] accounts = new BankAccount[num];
		
		for(int i=0; i<num; i++) {
			System.out.println("\nAccount " + i);
			accounts[i] = BankAccount.createAccount();
		}
		
		while(!exit) {
			System.out.println("1. Display all account details\n2. Search by account number\n3. Deposit amount\n4. Withdraw amount\n5. Exit\nEnter choice: ");
			int opt = scanner.nextInt();
			
			switch(opt) {
			case 1:
				for(int i=0; i<num; i++) {
					System.out.println(accounts[i].toString());
				}
				break;
			case 2:
				System.out.println("Enter account number to search: ");
				int accountNumber = scanner.nextInt();
				scanner.nextLine();
				
				for(int i=0; i<num; i++) {
					if(accounts[i].accountNumber == accountNumber) {
						System.out.println(accounts[i].toString());
						break;
					}
				}
				break;
			case 3:
				System.out.println("Enter account number: ");
				accountNumber = scanner.nextInt();
				scanner.nextLine();
				System.out.println("Enter amount to deposit: ");
				double amount = scanner.nextDouble();
				scanner.nextLine();
				
				for(int i=0; i<num; i++) {
					if(accounts[i].accountNumber == accountNumber) {
						try {
							accounts[i].deposit(amount);
						}catch(InvalidAmountException e) {
							System.out.println(e);
						}
						
						break;
					}
				}
				break;
			case 4:
				System.out.println("Enter account number: ");
				accountNumber = scanner.nextInt();
				scanner.nextLine();
				System.out.println("Enter amount to withdraw: ");
				amount = scanner.nextDouble();
				scanner.nextLine();
				
				for(int i=0; i<num; i++) {
					if(accounts[i].accountNumber == accountNumber) {
						try {
							accounts[i].withdraw(amount);
						}catch(InsufficientFundsException e) {
							System.out.println(e.getMessage());
						}catch(InvalidAmountException e) {
							System.out.println(e.getMessage());
						}
						break;
					}
				}
				break;
			case 5:
				exit = true;
				break;
			default:
				System.out.println("Invalid choice");
				
			}
		}
	}

}