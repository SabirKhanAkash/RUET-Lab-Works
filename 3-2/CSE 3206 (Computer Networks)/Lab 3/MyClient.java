import java.net.*;  
import java.io.*;

public class MyClient{  
	public static void main(String args[])throws Exception {  
		Socket soc = new Socket("localhost",3333);  
		DataInputStream din = new DataInputStream(soc.getInputStream());  
		DataOutputStream dout = new DataOutputStream(soc.getOutputStream());  
		BufferedReader buffRead = new BufferedReader(new InputStreamReader(System.in));  
  
		String str1 = "", str2 = "";  
		System.out.println("~~~ (Enter 'exit' for exiting) ~~~");
		while(!str1.equals("exit")){  
			System.out.println("\nEnter a message that will be sent to server: ");
			str1 = buffRead.readLine();  
			dout.writeUTF(str1);  
			dout.flush();  
			str2 = din.readUTF();  
			System.out.println("Server is saying : "+str2);  
		}  
  
		dout.close();  
		soc.close();  
	}
} 