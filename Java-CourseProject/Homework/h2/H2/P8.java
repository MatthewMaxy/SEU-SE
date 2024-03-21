package H2;

public class P8 {
    static public void print(String...str)
    {
        for(String a:str)
        {
            System.out.println(a);
        }
    }
    public static void main(String[] args)
    {
        String a[]={"aa","bb","cc"};
        System.out.println("pass through separated");
        print("aa","bb","cc","dd");
        System.out.println("pass through s[]");
        print(a);
    }


}
