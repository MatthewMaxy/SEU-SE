package test;
interface s1{
    void f();
}
interface s2 extends s1{
    void g();
}
interface s3 extends s1{
    void h();
}
interface s4 extends s2,s3{
    void i();
}
public class Q3 {
    public static void main(String[] args) {

    }
}
