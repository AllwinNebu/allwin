import java.util.Scanner;
public class Mark
{
    String name;
    int age, m1, m2, m3;
    double total , average;

    public Mark ( String n, int d, int a, int b, int c)

    {
        name = n;
        age = d;
        m1 = a;
        m2 = b;
        m3 = c;
    }

     public void doing()
     {
         total= m1+m2+m3;
         average =total/3;
     }

      public void vomiting()
      {
         System.out.println("Name is : " + name);
         System.out.println("Age is : " + age);
         System.out.println("Mark 1 is : " + m1);
         System.out.println("Mark 2 is : " + m2);
         System.out.println("Mark 3 is : " + m3);
         System.out.println("Total is : " + total);
         System.out.println("Average is : " + average);
      }

      public static void main(String args[])
      {
          Scanner sc = new Scanner(System.in);

          String name1;
          int age1;
          int a1 ,b1,c1;

          System.out.println("Enter your stupid name");
          name1 = sc.nextLine();

          System.out.println("enter your age");
          age1 = sc.nextInt();
          
          System.out.println("Enter your mark dipshit");
          a1=sc.nextInt();
          b1=sc.nextInt();
          c1=sc.nextInt();

          Mark ob = new Mark (name1, age1, a1, b1, c1);
          ob.doing();
          ob.vomiting();
          sc.close();

      }
}
