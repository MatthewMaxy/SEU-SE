class A
{
    void A1() throws Exception{
        System.out.println("A中A1（）调用");
    }
}
class B extends A
{
    void A1()throws Exception{
        System.out.println("B中A1（）调用");
    }
}
class C extends B{
    public void A1() throws Exception{
        System.out.println("C中A1调用");
    }
}

public class Q16 {
    public static void main(String[] args) {
        A c=new C();
        try
        {
            c.A1();
        }catch(Exception e)
        {
            System.out.println("捕获异常");
        }
}
}
