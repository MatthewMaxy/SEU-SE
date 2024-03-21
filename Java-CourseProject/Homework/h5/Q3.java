import java.util.*;
class Generator
{
    String[] str={"Snow White", "Queen", "Prince", "Princess"};
    int count=0;
    public String next()
    {
        int tem=count;
        count=(count+1)%4;
        return str[tem];
    }
}

public class Q3 {
    public static void print(Collection c)
    {
        for(Object i:c)
        {
           System.out.print(i+"  ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Generator g1=new Generator();
        System.out.println("以下为数组输出：");
        String []s1={g1.next(), g1.next(), g1.next(), g1.next()};
        for(Object i:s1)
        {
            System.out.print(i+"  ");
        }
        System.out.println();
        System.out.println("以下是ArrayList输出：");
        ArrayList<String>arrayList=new ArrayList<String>();
        for(int i=0;i<g1.str.length;i++)
        {
            arrayList.add(g1.next());
        }
        print(arrayList);
        System.out.println("以下是LinkedList输出：");
        LinkedList<String>linkedList=new LinkedList<String>();
        for(int i=0;i<g1.str.length;i++)
        {
            linkedList.add(g1.next());
        }
        print(linkedList);
        System.out.println("以下是HashSet输出：");
        HashSet<String>hashSet=new HashSet<String>();
        for(int i=0;i<g1.str.length;i++)
        {
            hashSet.add(g1.next());
        }
        print(hashSet);
        System.out.println("以下是LinkedHashSet输出：");
        LinkedHashSet<String>linkedHashSet=new LinkedHashSet<String>();
        for(int i=0;i<g1.str.length;i++)
        {
            linkedHashSet.add(g1.next());
        }
        print(linkedHashSet);
        System.out.println("以下是TreeSet输出：");
        TreeSet<String>treeSet=new TreeSet<String>();
        for(int i=0;i<g1.str.length;i++)
        {
            treeSet.add(g1.next());
        }
        print(treeSet);
    }
}
