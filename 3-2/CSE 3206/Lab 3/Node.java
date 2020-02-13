// Java program to convert 
// string into binary string 
import java.util.*; 

class Node 
{ 

	// utility function 
	static void strToBinary(String s) 
	{ 
		int n = s.length(); 

		for (int i = 0; i < n; i++) 
		{ 
			// convert each char to 
			// ASCII value 
			int val = Integer.valueOf(s.charAt(i)); 

			// Convert ASCII value to binary 
			String bin = ""; 
			while (val > 0) 
			{ 
				if (val % 2 == 1) 
				{ 
					bin += '1'; 
				} 
				else
					bin += '0'; 
				val /= 2; 
			} 
			bin = reverse(bin); 

			System.out.print(bin + " "); 
		} 
	} 

	static String reverse(String input) 
	{ 
		char[] a = input.toCharArray(); 
		int l, r = 0; 
		r = a.length - 1; 

		for (l = 0; l < r; l++, r--) 
		{ 
			// Swap values of l and r 
			char temp = a[l]; 
			a[l] = a[r]; 
			a[r] = temp; 
		} 
		return String.valueOf(a); 
	} 

	// Driver code 
	public static void main(String[] args) 
	{ 
		String s = "geeks"; 
		strToBinary(s); 
	} 
} 

// This code is contributed by 29AjayKumar 
