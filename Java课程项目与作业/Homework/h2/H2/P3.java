package H2;

class Q3
{
    Q3()
    {
        this(3);
        System.out.println("H2.Q3()");
    }
    Q3(int m)
    {
        System.out.println("H2.Q3("+m+")");
    }

}

public class P3 {
    public static void main(String[] args)
    {
        Q3 tem=new Q3();
        Q3 tem2=new Q3(1);
    }

}
