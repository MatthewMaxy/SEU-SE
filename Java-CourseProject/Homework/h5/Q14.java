class MyException6 extends Exception{
    public MyException6(){};
    public MyException6(String msg){
        super(msg);
    }
}
class MyException7 extends Exception{
    public MyException7(){};
    public MyException7(String msg){
        super(msg);
    }
}
class Test{
    public void f() throws MyException7 {
        try{
            System.out.println("f()中调用g()方法");
            g();
        }catch (MyException6 myException6) {
            throw new MyException7();
        }
    }
    public void g() throws MyException6 {
        System.out.println("g()方法调用并抛出异常6");
        throw new MyException6();
    }
}
public class Q14 {
    public static void main(String[] args) {
        Test test=new Test();
        try{
            test.f();
        }catch (MyException7 myException7)
        {
            System.out.println("f()方法调用抛出异常6");
        }
    }
}
