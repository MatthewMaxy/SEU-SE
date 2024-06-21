import java.util.Random;
import java.util.random.*;
public class Q11 {
    public static void main(String[] arg)
    {
        Random a=new Random();
        boolean a1=a.nextBoolean();
        if(a1)
            System.out.println("正面");
        else
            System.out.println("反面");
    }

}
