import java.util.LinkedList;
import java.util.ListIterator;

public class Q6 {
    public static void main(String[] args) {
        LinkedList<Integer>linkedList=new LinkedList<>();
        ListIterator listIterator=linkedList.listIterator();
        for(int i=0;i<10;i++) {
            listIterator=linkedList.listIterator();
            for (int j = 0; j < (linkedList.size() + 1) / 2; j++)
                listIterator.next();
            listIterator.add(i);
        }
        for(int c:linkedList)
            System.out.print(c+" ");

    }
}
