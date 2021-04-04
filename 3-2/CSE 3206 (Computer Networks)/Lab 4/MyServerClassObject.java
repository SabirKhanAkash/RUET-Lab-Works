import java.net.*;  
import java.io.*; 
import java.io.Serializable;
import java.util.*;
import java.lang.*;

class ParityObject implements Serializable
{
	int header;
	String data;
	int protocol = 10;
	int tailer;
	int acknowledge;

    ParityObject(int header, String data, int protocol, int tailer, int acknowledge)
    {
        this.header = header;
        this.data = data;
        this.protocol = protocol;
        this.tailer = tailer;
        this.acknowledge = acknowledge;
    }

	Boolean isParityMatched()
	{
		byte[] bytes = data.getBytes();
		StringBuilder binary = new StringBuilder();
		int count = 0;
		int pro = 1;
		int protocol = 10;

		for (byte b : bytes)
		{
			int val = b;
			for (int i = 0; i < 8; i++)
			{
				binary.append((val & 128) == 0 ? 0 : 1);
				if((val & 128) != 0)
					count++;
				val <<= 1;
			}
			binary.append(' ');
		}
		int head=0;

		if(header == 1 || header == 2 || header == 4 || header == 8 || header == 10)
			head = 1;
		if(header == 3 || header == 5 || header == 6 || header == 9)
			head = 2;
		if(header == 7)
			head = 3;

		if(((pro+head+count) % 2) == 0)
			tailer += 0;
		else
			tailer += 1;

		acknowledge = header;
		return true;
	}

	void showDetails()
	{
		System.out.println("Header was: "+header);
		System.out.println("Entered Data String was: "+data);
		System.out.println("protocol was: 10");
		System.out.println("Tailer is: "+tailer);
		System.out.println("Parity Matched !!! So, Acknowledge = Header = "+acknowledge);
	}  

	void output()
	{
		System.out.println("Recieved object from client !!! Acknowledge = "+acknowledge);
	} 
}

public class MyServerClassObject
{
    public static void main(String arg[]) throws Exception
    {
    	int ct = 0;
       	ServerSocket server=new ServerSocket(1700);   
	    Socket s=server.accept();   
 		System.out.println("*****Connection Established*****\n");   	

		ObjectOutputStream os = new ObjectOutputStream(s.getOutputStream());
		ObjectInputStream iss = new ObjectInputStream(s.getInputStream());
		BufferedReader buffRead = new BufferedReader(new InputStreamReader(System.in));

    	for (int i1=0; i1<10 ;i1++ ) {
    		System.out.println("-----------------------------------------------------------");
			System.out.println("\nEnter Header and Data String respectively: \n");	
			Scanner sc = new Scanner(System.in); 
			int header = sc.nextInt();
			String data = buffRead.readLine();
			int protocol = 10;
			int pro = 1;
			int tailer = 0;
			int acknowledge=0;

		    ParityObject object1 = new ParityObject(header,data,pro,tailer,acknowledge);
		    os.writeObject(object1);
		    ct++;

		    ParityObject pop = (ParityObject)iss.readObject();
			System.out.println("-----------------------------------------------------------");
			pop.output();
		   
			if(ct == 10)
				s.close();  		
    	}
    }
}