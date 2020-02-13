package myjava;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.io.ObjectInputStream;
import java.net.Socket;

public class cli3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Integer p=0,l=0;
		
		try
		{
			System.out.print("Client started");
			Socket soc = new Socket("localhost",9806);
			
			ObjectInputStream obji = new ObjectInputStream(soc.getInputStream());
			
			ObjectClass objectShow = (ObjectClass) obji.readObject();
			
			Integer header = objectShow.getHeader();
			String str = objectShow.getStr();
			Integer protocol = objectShow.getProtocol() ;
			Integer tailer = objectShow.getTailer();

			System.out.print("\nHeader : ");
			System.out.println(header);
			p+=findParity(header);
			System.out.print("String : ");
			System.out.println(str);
			
			for(int i=0;i<str.length();i++)
			{
				l=(int) str.charAt(i);
				p+=findParity(l);
			}
			
			System.out.print("Protocol : ");
			System.out.println(protocol);
			p+=findParity(protocol);
			System.out.print("Parity : ");
			System.out.println(tailer);
			
			if(p%2==0)
			{
				l=0;
			}
			else
			{
				l = 1;				
			}
			
			if(l.equals(tailer))
			{
				System.out.println("Parity Matched");				
			}
			else
			{
				System.out.println("Parity didn't match");
			}

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
