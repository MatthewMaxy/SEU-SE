package test;
class Outer2{
    class Inter2{}
    Inter2 inn;
    public Inter2 f(){return inn;}
}
class Test{
    Outer2 ouu=new Outer2();
    Outer2.Inter2 q=ouu.f();
}
public class Q7 {
    public static void main(String[] args) {
        Test t=new Test();
        System.out.println("success!");
        System.out.println(t.ouu.inn);
    }
}
