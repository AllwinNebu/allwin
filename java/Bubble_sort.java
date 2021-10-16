import java.util.Scanner;
public class Bubble_sort
{
    public static void main (String args[])
    {
      Scanner sc = new Scanner(System.in);

      int n;
      
      System.out.println("Enter the size of the array");
      n=sc.nextInt();

      System.out.println("Enter the array");
      int a[]= new int [n];

      
      
      for ( int i=0 ; i<n ; i++)
      {
          a[i]=sc.nextInt();
      }

      for ( int i=0; i<n ; i++)
      {
          for (int j=0; j<n-1 ; j++)
          {
              if ( a[j] > a[j+1] )
              {
                  int temp = a[j];
                  a[j] = a[j+1];
                  a[j+1] = temp;
              }
          }
      }
      System.out.println("The sorted one :");
      for (int i = 0 ; i<n ; i++)
      {
        System.out.println (a[i]);
      }
     
      sc.close();
    }
}
