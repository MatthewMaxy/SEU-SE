import java.util.ArrayList;
class Gerbil
{
    private int gerbilNumber;
    Gerbil(int num){
        gerbilNumber=num;
    }
    public void hop()
    {
        System.out.println("第"+gerbilNumber+"只在跳");
    }
}

public class Q1 {
    public static void main(String[] args) {
        ArrayList<Gerbil>arrayList=new ArrayList<Gerbil>();
        for(int i=0;i<5;i++)
        {
            arrayList.add(new Gerbil(i+1));
            arrayList.get(i).hop();
        }

    }
}
