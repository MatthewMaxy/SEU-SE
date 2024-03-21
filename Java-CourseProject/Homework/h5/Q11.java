class MyException extends Exception
{
    private String str;
    public MyException(String str2)
    {str=str2;}
    public void operation()
    {System.out.println("捕捉输出："+str);}

}

public class Q11 {
    public static void main(String[] args) {
        try{
            throw new MyException("111");
        }
        catch(MyException myException)
        {
            myException.operation();
        }
    }
}
