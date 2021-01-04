package file;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class File {
    public static void main(String[] args) throws FileNotFoundException {
        java.io.File file = new java.io.File("Test.txt");
        if(file.exists()){
            System.out.println("File already exists");
        }
        try (java.io.PrintWriter out = new java.io.PrintWriter(file)){
        out.print("Mr.X ");
        out.println(100);
        out.print("Mrs.Y ");
        out.println("90");
        }
        Scanner read = new Scanner(file);
        while(read.hasNext())
        {
            String S = read.next();
            int i=read.nextInt();
            System.out.println(S+" "+i);
        }
        read.close();
    }
    
}
