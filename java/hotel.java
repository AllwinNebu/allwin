import java.util.Scanner;
public class hotel 
{     //choice 2//
    public void wantToBeCostmer()//main costumer method
    {
      Scanner wtbc = new Scanner(System.in);
      hotel wc =new hotel(); // object for wantToBeCostumer method
      for (int i= 1;i>0;i++)
      {
        System.out.println("Enter your choice : ");
        System.out.println("1. Book room and other info about rooms");
        System.out.println("2. Talk to our staff");
        System.out.println("3. To visit our website ");
        System.out.println("4. To exit ");
        int cho= wtbc.nextInt();
        if(cho==4)
        {
            break;
        }
        else if(cho==3)//website
        {
            System.out.println("www.ABD hotel.com \n");
        }
        else if(cho==2)//talk
        {
            System.out.println("PH: 0456-8756258, 0478-8563214 ");
            System.out.println("Mail: abd@gmail.com \n");
        }
        else if(cho==1)
        {
          wc.roomStuff();//method for room realted method line 37
        }
      }
      wtbc.close();
    }
    
    public void roomStuff() //room related
    {
      Scanner room = new Scanner (System.in);
      for (int i =1;i>0;i++)
      {
        System.out.println("Enter your choice :");
        System.out.println("1. To book room");
        System.out.println("2. To see type of room ");
        System.out.println("3. to exit");
        int cho= room.nextInt();
        if(cho==3)
        {
            break;
        }
        else if (cho==2)//to see type of room
        {
            System.out.println("Normal Room \n Couple Room \n Laxuary Room ");
        }
        else if(cho==1)//room booking
        {
          System.out.println("1. To book Normal Room ");
          System.out.println("2. To book Couple Room");
          System.out.println("3. To book Laxuary Room");
          System.out.println("4. To Exit");
          int cho1=room.nextInt();
          System.out.println("Enter the number of room : ");
          int noOfRoom=room.nextInt();
          if(cho1==1) //booking for normal room
          {
            System.out.println("Your booking for " + noOfRoom + " been done sucessfully");
          }
          else if (cho1==2)//booking for couple room
          {
            System.out.println("Your booking for " + noOfRoom + " been done sucessfully");
          }
          else if(cho1==3)//booking for lauxary room
          {
            System.out.println("Your booking for " + noOfRoom + " been done sucessfully");
          }
          else{
            break;
          }
        }
      }
      room.close();
    }

     //CHOICE 1
    public void alreadyAcostumer()
    {
       System.out.println("Enter your choice : ");
       
    }

    public static void main(String args[]){
        Scanner sc= new Scanner (System.in);
        hotel ob= new hotel();
        for (int i= 1;i>0;i++)
        {
        System.out.println("Welcome to ABD hotel");
        System.out.println("Enter your choice : ");
        System.out.println("1. You are our dear costemer");
        System.out.println("2. Want to be our costmer");
        System.out.println("3. Exit");
        int cho= sc.nextInt();
        
        if (cho==3)
        {
          break;
        }

        else if(cho==2)
        {
          ob.wantToBeCostmer(); //for booking and other stuff method line 4
        }

        else{
            ob.alreadyAcostumer();//for already a costumer method line 85
        }

        }
        sc.close();
    }
    
}
