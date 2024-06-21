package test;

class Outer4{
    class Inter4{
        private int v=3;
    }
    public void print()
    {
        //Outer4 m=new Outer4();
        //System.out.println(m.v);//无法直接调用
        Inter4 inn=new Inter4();
        System.out.println(inn.v);//可以通过外部类方法新建内部类对象再调用
    }

}
public class Q9 {
    public static void main(String[] args) {
        Outer4 outer4=new Outer4();
        outer4.print();
    }

}
