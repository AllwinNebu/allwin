import java.util.*;

public class stringtoken
{
    public static void main(String[] args) {
        {
            Scanner sc = new Scanner (System.in);
            System.out.println("Enter the number with a space in between : ");
            String str=sc.nextLine();
            StringTokenizer st=new StringTokenizer(str," ");
            int n;
            int sum=0;
            while(st.hasMoreTokens())
            {
                String temp=st.nextToken();
                n=Integer.parseInt(temp);
                System.out.println("Number : " + n );
                sum=sum+n;
            }
            System.out.println("Sum : " + sum);
            sc.close();
        }
    }
}