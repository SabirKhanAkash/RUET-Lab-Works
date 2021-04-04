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

    ParityObject(int header, String data, int protocol, int tailer)
    {
        this.header = header;
        this.data = data;
        this.protocol = protocol;
        this.tailer = tailer;
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

		//System.out.println(binary);
		return true;
	}

	void showDetails()
	{
		System.out.println("Header was: "+header);
		System.out.println("\nEntered Data String was: "+data);
		System.out.println("\nprotocol was: 10");
		System.out.println("\nTailer is: "+tailer);
		System.out.println("\nParity Matched");
	}  
}

public class MyServerClass
{
    public static void main(String arg[]) throws Exception
    {   
	    ServerSocket server=new ServerSocket(1700);   
	    Socket s=server.accept();

		System.out.println("*****Connection Established*****\n");
		System.out.println("Enter Header and Data String respectively: \n");
	    
	    ObjectOutputStream os = new ObjectOutputStream(s.getOutputStream());
		BufferedReader buffRead = new BufferedReader(new InputStreamReader(System.in));
		
		Scanner sc = new Scanner(System.in); 
		int header = sc.nextInt();
		String data = buffRead.readLine();

		int pro = 1;
		int protocol = 10;
		int tailer = 0;

	    ParityObject object1 = new ParityObject(header,data,pro,tailer);
	    os.writeObject(object1);
	    //object1.isParityMatched();

	    s.close();
    }
}
