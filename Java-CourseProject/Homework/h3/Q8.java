public class Q8 {
    public static void ride (Cycle cycle)
    {
        cycle.play();
    }
    public static void main(String[] args)
    {
        Unicycle unicycle=new Unicycle();
        Bicycle bicycle=new Bicycle();
        Tricycle tricycle=new Tricycle();
        ride(unicycle);
        ride(bicycle);
        ride(tricycle);
    }
}
class Cycle
{
    void play() {
        System.out.println("Cycle");
    }
}
class Unicycle extends Cycle
{
    public void play()
    {
        System.out.println("Unicycle");
    }
}
class Tricycle extends Cycle{
    public void play()
    {
        System.out.println("Tricycle");
    }
}
class Bicycle extends Cycle{
    public void play()
    {
        System.out.println("Bicycle");
    }
}

