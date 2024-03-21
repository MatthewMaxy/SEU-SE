package test;
class Outer{
    class Inter{

    }
    public Inter f()
    {
        return(new Inter());
    }
}
public class Q6 {
    public static void main(String[] args) {
        Outer outer = new Outer();
        Outer.Inter inn=outer.f();
    }
}
