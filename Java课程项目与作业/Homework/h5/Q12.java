class MyException2 extends Exception
{
    private int a;
    public MyException2(int m){a=m;}
    public void operation()
    {System.out.println("捕捉输出："+a);}

}
public class Q12 {
    static int i=0;
    public static void main(String[] args) {
        while(true)
        {
            try{
                if(i<10)
                {
                    System.out.println(i+"无法执行");
                    throw new MyException2(i);
                }
            }
            catch(MyException2 myException2){
                i++;
            }
            finally {
                if(i>=10)
                {
                    System.out.println(i+"正常执行");
                    break;
                }
            }

        }
    }
}
