package dialoginputoutput;
import javax.swing.JOptionPane;
public class DialogInputOutput {
    public static void main(String[] args) {
        String S = JOptionPane.showInputDialog(null,"Enter a number: ");
        int i = Integer.parseInt(S);
        String S1 = JOptionPane.showInputDialog("Enter another number: ");
        int j = Integer.parseInt(S1);
        String S2 = "The sum of "+i+" and "+j+" is: "+(i+j);
        JOptionPane.showMessageDialog(null,S2);
    }
}
