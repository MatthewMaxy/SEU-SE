package test;
interface A1{
    void a1f();
    void a1g();
}
interface A2{
    void a2f();
    void a2g();
}
interface A3{
    void a3f();
    void a3g();
}
interface A4 extends A1,A2,A3{
    void a4f();
}
class C1{
    C1(){}
    void C1f(){}
}
class Tem extends C1 implements A4{
    public void a1f(){}
    public void a1g(){}
    public void a2f(){}
    public void a2g(){}
    public void a3f(){}
    public void a3g(){}
    public void a4f(){}
    public void printS1(A1 a1){System.out.println("out A1");}
    public void printS2(A2 a1){System.out.println("out A2");}
    public void printS3(A3 a1){System.out.println("out A3");}
    public void printS4(A4 a1){System.out.println("out A4");}
 }
public class Q4 {
    public static void main(String[] args) {
        Tem tem=new Tem();
        tem.printS1(tem);
        tem.printS2(tem);
        tem.printS3(tem);
        tem.printS4(tem);
    }
}
