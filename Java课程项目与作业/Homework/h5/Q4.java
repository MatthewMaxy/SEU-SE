import java.awt.desktop.SystemEventListener;
import java.util.ArrayList;
import java.util.List;

class Mq4
{
    int[] arr={0,1,2,3,4,5};
}

public class Q4 {
    public static void main(String[] args) {
        List<Integer>list=new ArrayList<Integer>();
        Mq4 a=new Mq4();
        for(int i:a.arr)
        {
            list.add(i);
        }
        System.out.println("原list："+list);
        List sublist=list.subList(2,5);
        System.out.println("sublist："+sublist);
        list.removeAll(sublist);
        System.out.println("去除后现list："+list);

    }
}
