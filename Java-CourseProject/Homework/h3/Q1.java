public class Q1 {
    public static void main(String[] args)
    {
        Root r=new Root();
        System.out.println("·············");
        Stem s=new Stem();
    }
}
class Component1
{
    public Component1()
    {
        System.out.println("Component1 constructed");
    }
}
class Component2
{
    public Component2()
    {
        System.out.println("Component2 constructed");
    }
}
class Component3
{
    public Component3()
    {
        System.out.println("Component3 constructed");
    }
}

class Root
{
    public Root()
    {
        System.out.println("Root()");
    }
    Component1 c1=new Component1();
    Component2 c2=new Component2();
    Component3 c3=new Component3();

}

class Stem extends Root
{
    public Stem()
    {
        System.out.println("Stem()");
    }
    Component1 C1=new Component1();
    Component2 C2=new Component2();
    Component3 C3=new Component3();

}


