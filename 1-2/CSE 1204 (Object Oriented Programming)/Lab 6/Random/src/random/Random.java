package random;
import javax.swing.JOptionPane;
import java.math.*;
public class Random {
    public static void main(String[] args) {
        double array[] = new double [100];
        int i,j,k,a;
        double t;
        int x;
        for(a = 0 ; a<100 ; a+=1)
            array[a] = Math.random()*100;  
        for (i = 0 ; i<100 ; i+=1)
            for (j = 0 ; j<(100-1) ; j+=1) {
                if (array[j] > array[j+1]) {
                    t = array[j];
                    array[j] = array[j+1];
                    array[j+1] = t;
                }
            }
          String S = "Sorted Array Element: "+(int)array[0];
          String S2 = " ";
          for (x = 0 ; x<100 ; x+=1) {
              String S1 = " "+(int)array[x];
              S2= S2 + S1;
              if (x==20 || x==40 || x==60 || x==80) {
                  S2 += "\n";
                  JOptionPane.showMessageDialog(null,S2);
               }
           }
           JOptionPane.showMessageDialog(null,S2);
    }
}  

