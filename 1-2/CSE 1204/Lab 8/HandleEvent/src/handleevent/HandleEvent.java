package handleevent;
import javax.swing.*;
import java.awt.event.*;
public class HandleEvent extends JFrame{   
        public HandleEvent() {
        JButton ok = new JButton("OK");
        JButton cancel = new JButton("CANCEL");
        JPanel panel = new JPanel();
        panel.add(ok);
        panel.add(cancel);
        add(panel);
        ListenerClass listener = new ListenerClass();
        ok.addActionListener(listener);
        cancel.addActionListener(listener);        
        }
    public static void main(String[] args) {
        JFrame frame = new HandleEvent();
        frame.setTitle("Demo");
        frame.setSize(300,100);
        frame.setLocation(200,100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
class ListenerClass implements ActionListener {
    public void actionPerformed(ActionEvent e) {
        System.out.println("The "+e.getActionCommand()+" button is clicked at"+new java.util.Date(e.getWhen()));
    }
}
