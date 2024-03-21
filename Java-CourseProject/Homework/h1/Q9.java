class Dog{
    String name;
    String says;
    Dog(String a,String b)
    {
        name=a;
        says=b;
    }

}

public class Q9 {
    public static void main(String[] arg)
    {
        Dog spot=new Dog("spot","Ruff!");
        Dog scruffy= new Dog("scruffy","Wurf!");
        System.out.println(spot.name+":"+spot.says);
        System.out.println(scruffy.name+":"+scruffy.says);
    }
}
