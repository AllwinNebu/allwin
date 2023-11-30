import java.util.*;
public class frequency {
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the string : ");
    String s=sc.nextLine();
    System.out.println("Enter the char you want to search : ");
    char serach = sc.next().charAt(0);
    int frequency=0; 
    for(int i=0;i<=s.length()-1;i++)
    {
        if(s.charAt(i)==serach){
            frequency++;
        }
    }
    System.out.println(frequency);
  }  
}
