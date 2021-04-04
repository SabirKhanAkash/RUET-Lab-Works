import java.io.*;
import java.net.*;
import java.lang.*;
import java.util.*;

public class MyClientClass 
{
    public static void main(String arg[]) throws Exception
    {
        Socket s = new Socket("localhost",1700);
        ObjectInputStream is = new ObjectInputStream(s.getInputStream());
        ParityObject p = (ParityObject)is.readObject();
        
        if(p.isParityMatched() == true) {
	        p.showDetails();       	
        }
        else
        	System.out.println("Something went wrong !!!");

        s.close();
    }
}