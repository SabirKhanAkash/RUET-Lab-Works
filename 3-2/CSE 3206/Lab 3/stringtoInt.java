import java.io.*;
import java.net.*;
import java.lang.*;

public class stringtoInt 
{
	public static void main(String[] args) {
		String s = "hello";
		byte[] bytes = s.getBytes();
		StringBuilder binary = new StringBuilder();
		for (byte b : bytes)
		{
			int val = b;
			for (int i = 0; i < 8; i++)
			{
				binary.append((val & 128) == 0 ? 0 : 1);
				val <<= 1;
			}
			binary.append(' ');
		}
		System.out.println("'" + s + "' to binary: " + binary);
	}
}