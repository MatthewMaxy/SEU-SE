class Amphibian
{
    public void f1()
    {
        System.out.println("public 函数f1调用");
    }
    private void f2()
    {
        System.out.println("private 函数f2调用");
    }
    protected void f3()
    {
        System.out.println("protected 函数f3调用");
    }//protected无法调用
     void f4()
    {
        System.out.println("default 函数f4调用");
    }
}
class Frog extends Amphibian
{
}


public class Q3 {
    public static void main(String[] args)
    {
        Frog frog=new Frog();
        Amphibian am=frog;
        am.f1();
        am.f3();
        am.f4();
    }
}
