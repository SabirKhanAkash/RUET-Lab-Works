package fileprintwriter;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FilePrintWriter {
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
        }
        Scanner read = new Scanner(file);
        while(read.hasNext())
        {
            String S = read.next();
            int i = read.nextInt();
            System.out.println(S+" "+i);
        }
        read.close();
    }
}
