package sum;
import java.util.Scanner;
public class Sum {
    static Scanner hp = new Scanner(System.in);
    public static void main(String[] args) {
        int a, b, c;
        System.out.println("Enter a number: ");
        a = hp.nextInt();
        System.out.println("Enter another number: ");
        b = hp.nextInt();
        c = a + b;
        System.out.print("The sum of " + a + " and " + b + " is: " + c + "\n");
        System.out.println("Enter a String: ");
        String d = hp.next();
        System.out.println("The input String is: " + d + ".");
    }
    
    
}
