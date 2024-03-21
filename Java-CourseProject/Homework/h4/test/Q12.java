package test;

class Outer7{
    public static class Inner7{
        public static int v2=71121117;
    }
    public void print()
    {
        Inner7 inner7=new Inner7();
        System.out.println(Inner7.v2);
    }
}
public class Q12 {
    public static void main(String[] args) {
        Outer7 outer7=new Outer7();
        Outer7.Inner7 inn=new Outer7.Inner7();//无需外部类对象来创建
        outer7.print();
        System.out.println(Outer7.Inner7.v2);
    }
}
