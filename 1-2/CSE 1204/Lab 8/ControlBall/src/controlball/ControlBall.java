package controlball;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ControlBall extends JFrame{
    private JButton jbtenlarge = new JButton("Enlarge");
    private JButton jbtshrink = new JButton("Shrink");
    private  BallCanvas canvas = new BallCanvas();
    public ControlBall(){
        JPanel panel = new JPanel();
        panel.add(jbtenlarge);
        panel.add(jbtshrink);
        this.add(canvas, BorderLayout.CENTER);
        this.add(panel,BorderLayout.SOUTH);
        jbtenlarge.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                canvas.enlarge();
            }
        });
        jbtshrink.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                canvas.shrink();
            }
        });
    }
    public static void main(String[] args) {
        ControlBall frame = new ControlBall();
        frame.setTitle("Control Ball");
        frame.setSize(300,300);
        frame.setLocation(400,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    public static class BallCanvas extends JPanel{
        private int radious = 5;
        public void enlarge(){
            radious+=1;
            repaint();
        }
        public void shrink(){
            radious-=1;
            repaint();
        }
    protected void paintComponent(Graphics g){
        super.paintComponents(g);
        g.drawOval(getWidth()/2-radious, getHeight()/2-radious, 2*radious, 2*radious);
        }
    }
}