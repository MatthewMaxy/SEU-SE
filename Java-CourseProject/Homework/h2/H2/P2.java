package H2;

class Q2 {
    Q2()
    {
        System.out.println("H2.Q2()");
    }
    Q2(String a)
    {
        System.out.println("H2.Q2("+a+")");
    }

}
public class P2 {
    public static void main(String[] args)
    {
        Q2 a=new Q2();
        Q2 b= new Q2("aaa");
    }
}

