import java.net.*;  
import java.io.*; 

public class MyServer{  
	public static void main(String args[])throws Exception{  
		ServerSocket serversoc = new ServerSocket(3333);  
		Socket soc = serversoc.accept();  
		DataInputStream din = new DataInputStream(soc.getInputStream());  
		DataOutputStream dout = new DataOutputStream(soc.getOutputStream());  
		BufferedReader buffRead = new BufferedReader(new InputStreamReader(System.in));  
		  
		String str1 = "", str2 = "";
		System.out.println("~~~ (Enter 'exit' for exiting) ~~~");  
		while(!str1.equals("exit")){  
			str1 = din.readUTF();  
			System.out.println("client is saying : "+str1);  
			System.out.println("\nEnter a message that will be sent to client: ");
			str2 = buffRead.readLine();  
			dout.writeUTF(str2);  
			dout.flush();  
		}  
		din.close();  
		soc.close();  
		serversoc.close();  
	}
}