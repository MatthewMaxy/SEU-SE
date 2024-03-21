package test;

abstract class Father
{
    Father(){print();}
    abstract void print();
}
class Son extends Father
{
    private int i=11;
    public void print() {System.out.println(i);}

}

public class Q1 {
    public static void main(String[]args)
    {
        Son son=new Son();
        son.print();
    }
}
