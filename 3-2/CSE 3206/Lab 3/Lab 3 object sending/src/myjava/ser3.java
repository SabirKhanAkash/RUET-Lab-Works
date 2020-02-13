package myjava;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class ser3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Integer header = null;
		String str =null;
		Integer protocol = null ;
		Integer tailer = null;
		Scanner sc  = new Scanner(System.in);
		Integer p=0,l=0;
		
		try
		{
			System.out.print("Waiting for clients...\n");
			ServerSocket ss = new ServerSocket(9806);
			Socket soc = ss.accept();
			System.out.print("Connected...");

			ObjectOutputStream objo = new ObjectOutputStream(soc.getOutputStream());


			System.out.print("\nHeader : ");
			header = sc.nextInt();
			p+=findParity(header);
			System.out.print("String : ");
			str =sc.nextLine();
			str =sc.nextLine();

			for(int i=0;i<str.length();i++)
			{
				l=(int) str.charAt(i);
				p+=findParity(l);
			}
			
			System.out.print("Protocol : ");
			protocol = sc.nextInt() ;
			p+=findParity(protocol);
			if(p%2==0)
			{
				tailer=0;
			}
			else
			{
				tailer = 1;				
			}
			System.out.print("Done\n");
				
			
			ObjectClass objc = new ObjectClass(header, str, protocol, tailer);
			
			objo.writeObject(objc);
			
			soc.close();
			
        }
		catch(Exception e)
		{
			e.printStackTrace();
		}
	
		
		
		
	}
	
	static Integer findParity(Integer v)
	{
		Integer r=0,m;
		while(v!=0)
		{
			m=v%2;
			v/=2;
			if(m==1)
				r++;
		}
		return r;
		
	}

}
