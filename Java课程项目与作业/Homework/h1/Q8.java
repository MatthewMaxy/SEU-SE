class test{
    float a;
}

public class Q8
{
    public static void main(String[] arg)
    {
        test f1=new test();
        test f2=new test();
        f1.a=(float) 0.1;
        System.out.println("f1:"+f1.a);
        f2.a=(float) 0.5;
        System.out.println("f2:"+f2.a);
        f2=f1;
        System.out.println("f1:"+f1.a+"f2:"+f2.a);
        f2.a=(float) 0.2;
        System.out.println("f1:"+f1.a+"f2:"+f2.a);

    }

}
