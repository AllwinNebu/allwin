import java.util.Scanner;

public class CaesarCipher {

    public static String caesar(String text, int shift) {

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);

            if (Character.isUpperCase(ch)) {
                char shifted = (char) ('A' + (ch - 'A' + shift) % 26);
                result.append(shifted);
            } 
            else if (Character.isLowerCase(ch)) {
                char shifted = (char) ('a' + (ch - 'a' + shift) % 26);
                result.append(shifted);
            } 
            else if (ch == ' ') {
                continue; // Skipping spaces
            } 
            else {
                result.append(ch); // Appending non-alphabet characters as is
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a word: ");
        String input = sc.nextLine();

        System.out.print("Enter the key: ");
        int key = sc.nextInt();

        String encryptedText = caesar(input, key);
        System.out.println("Encrypted: " + encryptedText);

        String decryptedText = caesar(encryptedText, -key);
        System.out.println("Decrypted: " + decryptedText); // Corrected this line

        sc.close();
    }
}
