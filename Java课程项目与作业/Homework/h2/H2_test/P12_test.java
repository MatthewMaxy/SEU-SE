package H2_test;

import H2.*;
public class P12_test {
    public static void main(String[] args) {
        P12 eg=new P12();
        // System.out.println(eg.a1);
        // System.out.println(eg.a2);
        System.out.println(eg.a3);//仅public变量可以在不同包非继承情况下访问
        //System.out.println(eg.a4);
        eg.publicPrint();
        Ex2 eg2=new Ex2();

    }
}
class Ex2 extends P12{
    void f(){
        Ex2 eg2=new Ex2();
        eg2.protectedPrint();//protected在不同包下继承类可用
    }
}
