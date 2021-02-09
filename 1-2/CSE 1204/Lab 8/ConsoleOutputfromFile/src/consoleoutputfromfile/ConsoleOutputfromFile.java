package consoleoutputfromfile;
import java.io.File;
import java.util.Scanner;
import java.io.FileNotFoundException;
public class ConsoleOutputfromFile {
    public static void main(String[] args) throws FileNotFoundException {
        java.io.File file = new java.io.File("Test.txt");
        if (file.exists()) {
            System.out.println("File already exists");
        }
        try (java.io.PrintWriter ob = new java.io.PrintWriter(file)) {
        ob.print("Mr. X ");
        ob.println(100);
        ob.print("Mr Y ");
        ob.println(900);
        ob.close();
        }
        Scanner input = new Scanner(file);
            while(input.hasNext()) {
                String S = input.next();
                int i = input.nextInt();
                System.out.println(S+" "+i);
            }
            input.close();
    }
}
