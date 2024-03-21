package H2;

public class P9 {
    enum Currency
    {
        Bolivar,Rial,VND,Rupee,UZS,GNF;
    }
    public static void main(String[] args) {
        for (Currency obj : Currency.values()) {
            System.out.println(obj+".ordinal()="+obj.ordinal());
        }
    }
}
