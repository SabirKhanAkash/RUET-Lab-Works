package myframe;
import javax.swing.*;
public class MyFrame {
    public static void main(String[] args) {
        JFrame frame1 = new CustomFrame();
        frame1.setTitle("Window");
        frame1.setLocation(200,100);
        frame1.setVisible(true);
    }
}
class CustomFrame extends JFrame {
    public CustomFrame() {
        JButton Jbt = new JButton("OK ");
        JLabel Jlbl = new JLabel("Enter your name: ");
        JTextField Jtf = new JTextField("Type name here");
        JCheckBox Jcb = new JCheckBox("Bold");
        JRadioButton Jrb = new JRadioButton("Red");
        JComboBox Jcmb = new JComboBox(new String[] { "Red","Green","Blue"});
        JPanel P = new JPanel();
        P.add(Jbt);
        P.add(Jlbl);
        P.add(Jtf);
        P.add(Jcb);
        P.add(Jrb);
        P.add(Jcmb);
        add(P);
        setSize(450,70);
       setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
