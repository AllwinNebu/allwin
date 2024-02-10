import java.util.Scanner;
class MutiplicationTable
{
  public synchronized void print(int a)
  {
    for(int i=1;i<=10;i++)
    {
        System.out.println(a +"*" + i + "=" + a*i);
    }
    System.out.println("*********************************************");
  }
}
class Thread1 extends Thread
{
    MutiplicationTable muti;
    int a;
   Thread1(MutiplicationTable multi , int a )
   {
     this.muti=multi;
     this.a=a;
   }
    public void run()
   {
      muti.print(a);
   }
}

class Thread2 extends Thread
{
    MutiplicationTable muti;
    int a;
   Thread2(MutiplicationTable multi , int a )
   {
     this.muti=multi;
     this.a=a;
   }
    public void run()
   {
      muti.print(a);
   }
}

class Thread3 extends Thread
{
    MutiplicationTable muti;
    int a;
   Thread3(MutiplicationTable multi , int a )
   {
     this.muti=multi;
     this.a=a;
   }
    public void run()
   {
      muti.print(a);
   }
}

public class ThreadMultiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int a =sc.nextInt();
        int b = sc.nextInt();
        int c= sc.nextInt();
        MutiplicationTable muti = new MutiplicationTable();
        Thread1 t1 = new Thread1(muti,a);
        Thread2 t2 = new Thread2(muti, b);
        Thread3 t3 = new Thread3(muti, c);
        t1.start();
        t2.start();
        t3.start();
        sc.close();
    }
}
