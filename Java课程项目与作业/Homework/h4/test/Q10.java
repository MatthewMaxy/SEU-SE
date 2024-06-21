package test;

interface B1{
    void f();
}
class Outer5{
    public Object f()
    {
        class Inter5 implements B1{
            public void f(){}
        }
        Inter5 inter5=new Inter5();
        return inter5;
    }
}
public class Q10 {
    public static void main(String[] args) {
        Outer5 outer5=new Outer5();
        outer5.f();
    }
}
