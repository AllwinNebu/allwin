 class NumberGenerator extends Thread{
    public void run()
   {
     for(int i =1;i<=10;i++){
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
        
        e.printStackTrace();
    }
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
        long sum;
        for(int i=0;i<+a;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
            System.out.println("Sum: "+sum);
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
        long sum;
        for(int i=0;i<+a;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
            System.out.println("Sum: "+sum);
        }
    }
}


class ThreadSum {
    public static void main(String args[])
    {
        NumberGenerator ob = new NumberGenerator();
        ob.start();
    }
    
}
