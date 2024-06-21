package H2;

public class P4  {
    static String s1 = "Initialized at def";
    static String s2;
    static {
        s2 = "Initialized in static block";
    }
    static void print(String m)
    {
        System.out.println(m);
    }

    public static void main(String[] args) {
        print(s1);
        print(s2);
    }
}

