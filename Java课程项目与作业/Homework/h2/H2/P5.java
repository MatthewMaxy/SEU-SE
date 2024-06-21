package H2;

public class P5 {
    String s;
    {
        s="hello";
    }
    void print()
    {
        System.out.println("s="+s);
    }
    public static void main(String[] args) {
        new P5().print();

    }

}
