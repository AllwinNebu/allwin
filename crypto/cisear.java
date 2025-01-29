import java.util.Scanner;

public class cisear {

    public static final String ALPHABET ="abcdefghijklmnoprstuvwxyz";

    public static String Encrpted(String text, int key)
    {
       text=text.toLowerCase();
       String str = "";

       for(int i =0;i<text.length();i++)
       {
         int pos =ALPHABET.indexOf(text.charAt(i));
         int enc = (key+pos)%26;
         char encChar=ALPHABET.charAt(enc);
         str=str+encChar;
       }

       return str;
    }

    public static String Decrypted(String text , int key)
    {
        text=text.toLowerCase();
        String str = "";
 
        for(int i =0;i<text.length();i++)
        {
          int pos =ALPHABET.indexOf(text.charAt(i));
          int enc = (key-pos)%26;
          if(enc<0)
          {
            enc=ALPHABET.length()+enc;
          }
          char encChar=ALPHABET.charAt(enc);
          str=str+encChar;
        }
 
        return str; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the text : ");
        String orginal = sc.nextLine();

        orginal=orginal.replace(" ", "");
        String out =Encrpted(orginal,3);
        System.out.println("Encrpted Message : "+out );
        System.out.println("Decrypted Message : "+ Decrypted(out,3));
    }
}
