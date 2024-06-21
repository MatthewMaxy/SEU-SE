public class Q4 {
    class Test
    {
        static final int a=1;
        final int m=0;

    }
    public static void main(String[] args)
    {
        System.out.println(Test.a);
//        System.out.println(Test.m);
        //非static 不可通过类名调取，且在初始化时 static参数仅初始化一次
    }

}
