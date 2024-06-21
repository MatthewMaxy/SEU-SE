package H2;

public class P12 {
    private int a1=1;
    protected int a2=2;
    public int a3=3;
    int a4=4;
    private void privatePrint(){
        System.out.println("private方法");
    }
    public void publicPrint(){
        System.out.println("public方法");
    }
    protected void protectedPrint(){
        System.out.println("被保护方法");
    }
    void Print(){
        System.out.println("默认方法");
    }
    void test()
    {
        P12 tem=new P12();
        tem.privatePrint();//private 只能在本类中调用
    }
}
class Ex extends P12
{
    void test()
    {
        Ex tem=new Ex();
        tem.protectedPrint();
    }

}
