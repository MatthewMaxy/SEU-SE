package test2;
import test.*;
class Son2 implements Q2{
    public void f(){System.out.println("f()");}
    public void g(){System.out.println("g()");}
    public void h(){System.out.println("h()");}
}

public class Q21 {
    public static void main(String[] args) {
        Son2 son2=new Son2();
        son2.f();
        son2.g();
        son2.h();
    }

}
