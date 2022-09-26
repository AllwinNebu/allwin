import java.util.Scanner;
public class hotel 
{
    static Scanner sc = new Scanner(System.in);
    public void room_book()
    {
        int cho1;
        int cho2;
        int cho3;
        int room_nor=30;
        int room_med=20;
        int room_lux=10;
        String name;
        int phone_no;
        String name1;
        int phone_no1;
        for(int j=1; j>0; j++)
        {
         System.out.println("1. To know the rate of the room");
         System.out.println("2. To book room");
         System.out.println("3. To check out room");
         System.out.println("4. To see number of room available");
         System.out.println("0. To exit");
         cho1= sc.nextInt();
         if(cho1==0)
         {
            System.out.println("Thank you for  visiting \n have a nice day");
            break;
         }
         else if (cho1==1)
         {
            System.out.println("At ADB our room cost  per night as follows ");
            System.out.println("Normal suit  : 3000 ruppes \t 37.54 dollar \t 37 euro \t  137.90 UAE Dirham ");
            System.out.println(" Medium suit  : 5000ruppes \t 62.57 dollar \t 61.64 euro \t  229.81 UAE Dirham ");
            System.out.println(" Luxuary suit  : 10000ruppes \t 125.12 dollar \t 123.27 euro \t  459.57 UAE Dirham ");
         }
         else if(cho1==2)
         {
           System.out.println("Enter your name:  ");
           name=sc.nextLine();
           System.out.println("Enter your phone number:  ");
           phone_no = sc.nextInt();
           System.out.println("Enter the type of room you love to have :  1. Normal suit \n 2. Medium suit \n 3. Luxuary suit");
           cho2=sc.nextInt();
           if(cho2==1)
           {
            room_nor= room_nor-1;
           }
           else if(cho2==2)
           {
            room_med=room_med-1;
           }
           else if(cho2==3)
           {
            room_lux=room_lux-1;
           }
           System.out.println("Thank you for choosing our hotel to stay We hope You have a nice day ");
         }
         else if(cho1==3)
         {
            System.out.println("Thanks for choosing our hotel to spend yoour holiday We hope you had a beautiful time here hoping to see you soon");
            System.out.println("Enter your name:  ");
            name1=sc.nextLine();
            System.out.println("Enter your phone number:  ");
            phone_no1 = sc.nextInt();
            System.out.println("Enter the type of room you love to have :  1. Normal suit \n 2. Medium suit \n 3. Luxuary suit");
            cho3=sc.nextInt();
            if(cho3==1)
            {
             room_nor= room_nor+1;
            }
            else if(cho3==2)
            {
             room_med=room_med+1;
            }
            else if(cho3==3)
            {
             room_lux=room_lux+1;
            }
         }
         else if( cho1==4)
         {
            System.out.println("Here at ADB we have " + room_nor +"normal room");
            System.out.println("Here at ADB we have " + room_med + "medium room");
            System.out.println("Here at ADB we have " + room_lux + "luxuary room");
         }
        }
    }
    public void food()
    {
        int cho4;
        int curry;
        int roti;
        int quan;
        int quan2;
        int quan3;
        int quan4;
        int quan5;
        int chin;
        int amer;
        int euro;
        for(int k=1;k>=0;k++)
        {
         System.out.println("Here is our menu Pls make your choice here we have 4 type of cuisine pls select which one do you love to have");
         System.out.println("1.Indian \n 2.chinnese \n 3.American \n 4.European \n 0.To exit");
         cho4=sc.nextInt();
         if(cho4==1)
         {
            System.out.println("Here is the wide varity of Indian food we have");
            System.out.println("Here is our bread option");
            System.out.println("1.Tandoori rotti");
            System.out.println("2. naan (normal)");
            System.out.println("3. Naan (gralic)");
            System.out.println("4. kerala paratha");
            System.out.println("5. Aloo paratha");
            System.out.println("6. Bhatura");
            System.out.println("pls select the rotti you wish have : ");
            roti=sc.nextInt();
            System.out.println("please enter the quntity: ");
            quan=sc.nextInt();
            System.out.println("Here is our curry options");
            System.out.println("1.Butter chicken");
            System.out.println("2. malabar chicken curry");
            System.out.println("3. chicken fry");
            System.out.println("4. malabar beef roast");
            System.out.println("5. Malabar beef fry");
            System.out.println("6. Panner butter masala");
            System.out.println("7. dal makidi");
            System.out.println("pls select the curry you wish have : ");
            curry=sc.nextInt();
            System.out.println("please enter the quntity: ");
            quan2=sc.nextInt();
            System.out.println("Thank you placing the oder your food will be deliverd  soon");
         }
         else if(cho4==2)
         {
            System.out.println("1.Dim Sums");
            System.out.println("2.Hot and Sour Soup");
            System.out.println("3.Szechwan Chilli Chicken");
            System.out.println("4.Spring Rolls");
            System.out.println("5.Stir Fried Tofu with Rice");
            System.out.println("6.Wok Tossed Veggies in Honey and Black Bean Glaze");
            System.out.println("Pls enter your dish : ");
            chin=sc.nextInt();
            System.out.println("Pls enter the quantity");
            quan3=sc.nextInt();
         }
         else if (cho4==3)
         {
            System.out.println("1. S'mores");
            System.out.println("2. Cronut");
            System.out.println("3. Chicken and Waffles");
            System.out.println("4. Mac and Cheese");
            System.out.println("5. Hot Dogs");
            System.out.println("6. steak");
            System.out.println("Pls enter your dish : ");
            amer=sc.nextInt();
            System.out.println("Pls enter the quantity : ");
            quan4=sc.nextInt();
         }
          else if(cho4==4)
          {
            System.out.println("1. Escargot");
            System.out.println("2. Fish and Chips");
            System.out.println("3. Herring");
            System.out.println("4. Cheese fondue ");
            System.out.println("5. Haggis");
            System.out.println("6. Pls enter your dish : ");
            euro=sc.nextInt();
            System.out.println("Pls enter the quantity : ");
            quan4=sc.nextInt();
          }

         else if( cho4==0)
         {
            System.out.println("Thank you have a nice day");
            break;
         }
       }
    }
    public void info()
    {
        System.out.println("Taj, India’s Strongest Brand across industries and sectors*, is an iconic hospitality brand from the Indian Hotels Company Limited.");
        System.out.println("The brand continues to be one of the most revered and loved hospitality brands with a legacy of over 116 years of impeccable service and genuine warmth");
        System.out.println("Embodying the spirit of “Tajness”, authentic original palaces, landmark hotels, idyllic resorts and natural safari lodges interpret the tradition of hospitality in a refreshingly modern way to create unique experiences and lifelong memories");
    }
    public void compalint()
    {
        System.out.println("We asking for any bad behaviour from our side you can rase your complaint by calling the number: 9845315479");
    }
    public void emergency()
    {
        int cho5;
        for (int h=1; h>=0; h++)
        {
            System.out.println("Enter your choice : ");
            System.out .println("1. to call help desk");
            System.out .println("2. to call ambulance");
            System.out .println("3. to call fireforce");
            System.out .println("0. to exit");
            cho5=sc.nextInt();
            if(cho5==1)
            {
                System.out .println("6598426154");
            }
            else if(cho5==2)
            {
                System.out .println("101");
            }
            else if(cho5==3)
            {
                System.out .println("102");
            }
            else if (cho5==0)
            {
                System.out .println("Thank you we hope you are doing fine have a safe day");
                break;
            }
        }
    }
    public static void main(String args[])
    {
        
        hotel ob = new hotel();
        for(int i=1; i>0; i++)
        {
            int cho;
            System.out.println("Welcome to ADB hotel");
            System.out.println("Enter your choice");
            System.out.println("1. To book room ");
            System.out.println("2. To oder food");
            System.out.println("3. To get more information regarding the hotel");
            System.out.println("4. To submit compalint or contact our staff");
            System.out.println("5. For emergency purpose");
            System.out.println("0. To exit");
            cho= sc.nextInt();
            if (cho==0)
            {
                System.out.println("Thank you for  visiting \n have a nice day");
                break;
            }
            else if ( cho==1)
            {
              ob.room_book();
            }
            else if( cho==2)
            {
                ob.food();
            }
            else if(cho==3)
            {
                ob.info();
            }
            else if(cho==4)
            {
                ob.compalint();
            }
            else if(cho==5)
            {
                ob.emergency();
            }
        }
        sc.close();
    }    
}
