package frameaction;
import java.awt.*;
import javax.swing.border.*;
import javax.swing.*;
public class FrameAction extends JFrame {
    public FrameAction() {
        JPanel P1 = new JPanel(new FlowLayout(FlowLayout.LEFT,2,2));
        JButton Jbtleft = new JButton("Left");
        JButton Jbtcenter = new JButton("Center");
        JButton Jbtright = new JButton("Right");
        
        Jbtleft.setBackground(Color.YELLOW);
        Jbtcenter.setBackground(Color.GREEN);
        Jbtright.setBackground(Color.ORANGE);
        Jbtright.setToolTipText("This is the Right Button");
        Jbtleft.setToolTipText("This is the Left Button");
        Jbtcenter.setToolTipText("This is the Center Button");
        
        P1.add(Jbtleft);
        P1.add(Jbtcenter);
        P1.add(Jbtright);
        P1.setBorder(new TitledBorder("The Three Button"));
        
        Font longFont = new Font("Times Roman",Font.BOLD,18);
        Border lineBorder = new LineBorder(Color.BLACK,2);
        JPanel P2 = new JPanel(new GridLayout(1,2,3,4));
        JLabel Jlblred = new JLabel("Red");
        JLabel Jlblorange = new JLabel("Orange");
        Jlblred.setForeground(Color.RED);
        Jlblorange.setForeground(Color.ORANGE);
        Jlblred.setFont(longFont);
        Jlblorange.setFont(longFont);
        Jlblred.setBorder(lineBorder);
        Jlblorange.setBorder(lineBorder);
        
        P2.add(Jlblred);
        P2.add(Jlblorange);
        P2.setBorder(new TitledBorder("Two Label"));
        
        setLayout(new GridLayout(2,1,2,3));
        add(P1);
        add(P2);
    }
    public static void main(String[] args) {
        JFrame frame1 = new FrameAction();
        frame1.setTitle("Window");
        frame1.setLocation(400,50);
        frame1.setSize(300,150);
        frame1.setVisible(true);
    }
}
