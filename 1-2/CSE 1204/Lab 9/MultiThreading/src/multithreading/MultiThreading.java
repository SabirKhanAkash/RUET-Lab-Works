package multithreading;
class Test implements Runnable {
    char c;
    public Test(char s) {
        c = s;
    }
    public void run() {
        int i;
        for (i=0 ; i<100 ; i++) {
            System.out.print(c+"  ");
            if(i==10 || i==20 || i==30 || i==40)
                 System.out.print("\n");
        }
        System.out.print("\n");
    }
}
class Test1 implements Runnable {
    int i1;
    public Test1(int i) {
        i1 = i;
    }
    public void run() {
        int i;
        for (i=0 ; i<100 ; i++) {
            System.out.print(i1+"  ");
            if(i==10 || i==20 || i==30 || i==40)
                 System.out.print("\n");
        }
         System.out.print("\n");
    }
}
public class MultiThreading {
    public static void main(String[] args) {
        Test t1 = new Test('A');
        Test t2 = new Test('B');
        Test1 t3 = new Test1(100);
        Thread thread1 = new Thread(t1);
        Thread thread2 = new  Thread(t2);
        Thread thread3 = new Thread(t3);
        thread1.start();
        thread2.start();
        thread3.start();
    }
}