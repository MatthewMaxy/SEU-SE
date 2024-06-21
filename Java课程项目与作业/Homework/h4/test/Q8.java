package test;
class Outer3
{
    private int v1=1;
    private void f(){System.out.println("Outer3 f()");}
    class Inter3{
        public void modify()
        {
            System.out.println("v1 before: "+v1);
            v1++;
            System.out.println("v1 after: "+v1);
            f();
        }
    }
    public void f2()
    {
        Inter3 inn=new Inter3();
        inn.modify();
        System.out.println("Outer3 f2()");
    }

}
public class Q8  {
    public static void main(String[] args) {
        Outer3 outer3=new Outer3();
        outer3.f2();
        Outer3.Inter3 inn=outer3.new Inter3();
        inn.modify();
    }
}
