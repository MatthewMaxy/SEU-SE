package test;
interface B2{
    void f();
}
class Outer6{
    public Object f()
    {
       return new B2(){
           public void f() {}
       };
    }
}
public class Q11 {
    public static void main(String[] args) {
        Outer6 outer6=new Outer6();
        outer6.f();
    }
}
