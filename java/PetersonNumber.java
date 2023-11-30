import java.util.Scanner;
public class PetersonNumber {
     public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a,temp,digit,fact=1,i,sum=0;
        System.out.print("Enter a number :  ");
        a=sc.nextInt();
        temp=a;
            while(temp>0)
            {
                digit=temp%10;
                for(i=1;i<=digit;i++)
                {
                    fact=fact*i;
                }
                sum=sum+fact;
                temp=temp/10;
                fact=1;
            }
        if(a==sum)   
            System.out.print(a+" is a  Peterson number");
        else
            System.out.print(a+" is not a Peterson number");
    }
}
