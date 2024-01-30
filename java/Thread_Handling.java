 
public class Thread_Handling {
    public static void main(String args[])
    {
        NumberGenerator ob = new NumberGenerator();
        ob.start();
    }
}
 class NumberGenerator extends Thread{
    public void run()
   {

     int a = (int) (Math.random() * (1000 - 1)) + 1;
     System.out.println("random : " + a);
     if(a%2==0)
     {
        ThreadEven even = new ThreadEven(a);
        even.start();
     }
     else
     {
        ThreadOdd odd = new ThreadOdd(a);
        odd.start();
     }
     try {
        this.sleep(500);
    } catch (InterruptedException e) {
        // TODO Auto-generated catch block
        e.printStackTrace();
    }
   }
}

class ThreadEven extends Thread
{
    int limit;
    public ThreadEven(int a) 
    {
      limit=a;
    }
    public void run()
    {
        for (int i = 1;i<=limit;i++)
        {
            if(i%2==0)
            {
                System.out.println("Even : " + i);
            }
        }

    }  

}

class ThreadOdd extends Thread
{
    int limit;
    public ThreadOdd(int a) 
    {
      limit=a;
    }
    public void run()
    {
        for (int i = 1;i<=limit;i++)
        {
            if(i%2!=0)
            {
                System.out.println("Odd :  " + i);
            }
        }
    }  
}