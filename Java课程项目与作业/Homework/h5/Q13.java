class ThrowException{
    public void f(int i) throws MyException3,MyException4,MyException5
    {
        if(i==1)
            throw new MyException3("a");
        if(i==2)
            throw new MyException4("b");
        if(i==3)
            throw new MyException5("c");
    }
}
public class Q13 {
    public static void main(String[] args) {
        ThrowException throwException=new ThrowException();
        for(int i=1;i<=3;i++) {
            try {
                throwException.f(i);
            } catch (MyException5 | MyException4 | MyException3 myException) {
                System.out.println("捕获异常");
                System.out.println(myException.getClass());
            }
        }
    }
}
class MyException3 extends Exception{
    private String str;
    public MyException3(){}
    public MyException3(String str2){
        str=str2;
    }
    public void display3(){
        System.out.println(str);
    }
}
class MyException4 extends Exception{
    private String str;
    public MyException4(){}
    public MyException4(String str2){
        str=str2;
    }
    public void display4(){
        System.out.println(str);
    }
}
class MyException5 extends Exception{
    private String str;
    public MyException5(){}
    public MyException5(String str2){
        str=str2;
    }
    public void display5(){
        System.out.println(str);
    }
}