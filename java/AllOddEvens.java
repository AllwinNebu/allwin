import java.util.*;
public class AllOddEvens {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the limit you want to check : ");
        int limit=sc.nextInt();
        System.out.println("Number is even : ");
        for (int i=1;i<=limit;i++)
        {
            if(i%2==0)
            {
                System.out.println(i);
            }
           
        }
        System.out.println("Number is odd : ");
        for (int j=1;j<=limit;j++)
        {
           if(j%2!=0)
            {
                System.out.println(j);
            }  
        }
    }
}
