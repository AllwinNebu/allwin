import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Cu extends JFrame {

    private JTextField inputTextField;
    private JTextField charTextField;
    
    public Cu() {
        setTitle("Character Replacement");
        setSize(400, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BoxLayout(getContentPane(), BoxLayout.Y_AXIS));

        inputTextField = new JTextField();
        charTextField = new JTextField();
        JButton replaceButton = new JButton("Replace Character");

        replaceButton.addActionListener( e ->
         {
            String inputText = inputTextField.getText();
            String charToReplace = charTextField.getText();

        if (inputText.contains(charToReplace) ) {
            String replacedText = inputText.replace(charToReplace, "1");
            inputTextField.setText(replacedText);
        } else {
            JOptionPane.showMessageDialog(this, "Please enter a valid character to replace.");
        }
        });

        add(new JLabel("Enter a string:"));
        add(inputTextField);
        add(new JLabel("Enter a character to replace:"));
        add(charTextField);
        add(replaceButton);

        setVisible(true);
    }

   

    public static void main(String[] args) {
       Cu c = new Cu();

    }
}