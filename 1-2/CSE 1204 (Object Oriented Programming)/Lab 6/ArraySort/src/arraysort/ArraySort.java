package arraysort;
import java.math.*;
import java.util.Scanner;
public class ArraySort {
    static Scanner hp=new Scanner(System.in);
    public static void main(String[] args) {
        int array[] = new int [100];
        int i,j,k,t,a;
        System.out.println("Enter Array Size: ");
        int n = hp.nextInt();
        System.out.println("Enter the elements of the array");
        for(a = 0 ; a<n ; a+=1)
            array[a] = hp.nextInt();
        /*for(a = 0 ; a<100 ; a+=1)
            array[a] = Math.Random*100;  */
        for (i = 0 ; i<n ; i+=1)
            for (j = 0 ; j<(n-1) ; j+=1) {
                if (array[j] > array[j+1]) {
                    t = array[j];
                    array[j] = array[j+1];
                    array[j+1] = t;
                }
            }
        for (k = 0 ; k<n ; k+=1)
            System.out.println("The sorted Array is: "+array[k]);
    }  
}
