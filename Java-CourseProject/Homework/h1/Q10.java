
public class Q10 {
    public static void main(String[] arg) {
        Dog spot = new Dog("spot", "Ruff!");
        Dog tem=spot;
        System.out.println(spot==tem);
        System.out.println(spot.equals(tem));
    }
}
