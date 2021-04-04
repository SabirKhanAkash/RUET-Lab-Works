import java.io.*;
import java.lang.*;
import java.util.*;
import java.net.*;  
import java.io.Serializable;

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
public class MyClientClassObject 
{
    public static void main(String arg[]) throws Exception
    {
    	int ct2=0;
        Socket s = new Socket("localhost",1700);
        ObjectOutputStream oos = new ObjectOutputStream(s.getOutputStream());
    	ObjectInputStream is = new ObjectInputStream(s.getInputStream());
    	int acknowledge = 0;
    	for(int j=0; j<10 ; j++) {
			ParityObject p = (ParityObject)is.readObject();
			System.out.println("-----------------------------------------------------------");

			if(p.isParityMatched() == true) {
				p.showDetails();
				acknowledge = (int)p.header;
			}
			else
				System.out.println("Something went wrong !!!");

			ParityObject object11 = new ParityObject(0,null,0,0,acknowledge);
		    oos.writeObject(object11);
		    
			ct2 ++;
        	if(ct2 == 10)
        		s.close();
    	}
    }


}