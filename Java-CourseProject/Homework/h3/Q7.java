public class Q7 {
    public static void main(String[] args)
    {
        System.out.println(Lab7.s);
        new Lab7();
        new Lab7();
    }
}
class Lab7
{
    static{
        int m=2;
        System.out.println("m初始化，类加载");
    }
    static int s=1;
}
