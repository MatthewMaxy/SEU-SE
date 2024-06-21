import java.util.*;

public class Q5 {
    public static void print(Collection c)
    {
        Iterator it=c.iterator();
        while(it.hasNext())
        {
            System.out.print(it.next().toString()+"  ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        String str[]={"a","b","c","d"};
        System.out.println("以下是ArrayList输出：");
        ArrayList<String> arrayList=new ArrayList<String>();
        for(int i=0;i<str.length;i++)
        {
            arrayList.add(str[i]);
        }
        print(arrayList);
        System.out.println("以下是LinkedList输出：");
        LinkedList<String> linkedList=new LinkedList<String>();
        for(int i=0;i<str.length;i++)
        {
            linkedList.add(str[i]);
        }
        print(linkedList);
        System.out.println("以下是HashSet输出：");
        HashSet<String> hashSet=new HashSet<String>();
        for(int i=0;i<str.length;i++)
        {
            hashSet.add(str[i]);
        }
        print(hashSet);
        System.out.println("以下是LinkedHashSet输出：");
        LinkedHashSet<String> linkedHashSet=new LinkedHashSet<String>();
        for(int i=0;i<str.length;i++)
        {
            linkedHashSet.add(str[i]);
        }
        print(linkedHashSet);
        System.out.println("以下是TreeSet输出：");
        TreeSet<String>treeSet=new TreeSet<String>();
        for(int i=0;i<str.length;i++)
        {
            treeSet.add(str[i]);
        }
        print(treeSet);
    }
}
