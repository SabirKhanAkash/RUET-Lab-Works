import java.io.*;
import java.net.*;
import java.util.Scanner;

public class MyClient{

	private static Socket socket;

	public static void main(String args[])
	{
		int flag = 0;
	    Scanner input=new Scanner(System.in);
	    while(true)
	    {
	        try
	        {
	        	
	        	if(flag == 0){
	        		System.out.println("Enter any text to test the connectivity of Server and Client: ");
	        		flag = flag + 1;
	        	}
	        	
	            String host = "localhost";
	            int port = 25000;
	            InetAddress address = InetAddress.getByName(host);
	            socket = new Socket(address, port);
	            //System.out.println("You're now connected to the Server"); 
	            
	            OutputStream os = socket.getOutputStream();
	            OutputStreamWriter osw = new OutputStreamWriter(os);
	            BufferedWriter bw = new BufferedWriter(osw);

	            String number;
	            number=input.next();
	            String sendMessage = number + "\n";
	            bw.write(sendMessage);
	            bw.flush();
	            System.out.println("Message sent to the server : "+sendMessage);

	            
	            InputStream is = socket.getInputStream();
	            InputStreamReader isr = new InputStreamReader(is);
	            BufferedReader br = new BufferedReader(isr);
	            String message = br.readLine();
	            System.out.println("Message received from the server : " +message);
	        }
	        catch (IOException exception)
	        {
	            //System.out.println("Server is still offline");

	        }
	    }
	}
}