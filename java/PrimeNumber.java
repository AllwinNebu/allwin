import java.util.Scanner;

public class PrimeNumber {
     public static void main(String args[])
    {
        int n,num=1,count=0,i;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number ");
        n=sc.nextInt();
        for (i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if (count==2)
        {
            System.out.println("Prime");
        }
        else
        {
            System.out.println("Not prime");
        }
    }
}