package test;
import java.nio.CharBuffer;
import java.util.Random;
import java.util.Scanner;

public class Q5 implements Readable{
        private static Random rand= new Random(15);
        private static final char[] capitals=
                "abcdefghijklmnopqrstuvwxyz".toCharArray();
        private int count;
        public Q5(int count) {
            this.count=count;
        }
        public int read(CharBuffer cb){
            if(count--==0)
                return -1;
            cb.append(capitals[rand.nextInt(capitals.length)]);
            return 10;

        }
        public static void main(String[] args) {
            Scanner s = new Scanner(new Q5(26));
            while(s.hasNext())
                System.out.println(s.next());
        }
}

