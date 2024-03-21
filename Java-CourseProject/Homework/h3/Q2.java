class Rooting
{
    void print()
    {
        System.out.println("Print()");
    }
    void print(int i)
    {
        System.out.println("Print("+i+")");
    }
    void print(char a)
    {
        System.out.println("Print("+a+")");
    }
}
class Tem extends Rooting
{
    void print(String str)
    {
        System.out.println("Print("+str+")");
    }
}
public class Q2 {
    public static void main(String[] args)
    {
        Rooting rooting=new Rooting();
        rooting.print();
        rooting.print(1);
        rooting.print('a');
        System.out.println("·············");
        Tem tem=new Tem();
        tem.print();
        tem.print(1);
        tem.print('a');
        tem.print("hello");
    }

}
