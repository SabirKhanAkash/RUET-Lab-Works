import java.io.*;
import java.net.*;
public class MyServer{

	private static Socket socket;

	public static void main(String[] args)
	{
	    try
	    {
	        int port = 25000;
	        ServerSocket serverSocket = new ServerSocket(port);
	        
	        while(true)
	        {
	            
	            socket = serverSocket.accept();
	            System.out.println("Client has connected!");
	            InputStream is = socket.getInputStream();
	            InputStreamReader isr = new InputStreamReader(is);
	            BufferedReader br = new BufferedReader(isr);
	            String number = br.readLine();
	            System.out.println("Message received from client is "+number);

	            
	            String returnMessage;
	            try
	            {
	                int numberInIntFormat = Integer.parseInt(number);
	                int returnValue = numberInIntFormat%1000;
	                returnMessage = String.valueOf(returnValue) + "\n";
	            }
	            catch(NumberFormatException e)
	            {
	                
	                returnMessage = "Please send your student ID\n";
	            }

	            
	            OutputStream os = socket.getOutputStream();
	            OutputStreamWriter osw = new OutputStreamWriter(os);
	            BufferedWriter bw = new BufferedWriter(osw);
	            bw.write(returnMessage);
	            System.out.println("Message sent to the client is "+returnMessage);
	            bw.flush();
	        }
	    }
	    catch (Exception e)
	    {
	        e.printStackTrace();
	    }
	}
}