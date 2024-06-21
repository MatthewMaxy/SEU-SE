import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;

public class Q9 {
    public static void main(String[] args) {
        HashMap<Integer,String> hashMap=new HashMap<Integer,String>();
        LinkedHashSet<String> linkedHashSet = new LinkedHashSet<>();
        hashMap.put(1,"aaa");
        hashMap.put(2,"bbb");
        hashMap.put(3,"ccc");
        hashMap.put(4,"ddd");
        for(int i=0;i< hashMap.size();i++){
            System.out.println(hashMap.get(i+1));
            linkedHashSet.add(hashMap.get(i+1));
        }
        System.out.println("以上是HashMap输出");
        for(String str:linkedHashSet)
            System.out.println(str);

        System.out.println("以上是linkedHashSet输出");
        HashSet<String> hashSet=new HashSet<>();
        for(int i=0;i< hashMap.size();i++){
            hashSet.add(hashMap.get(i+1));
        }
        for(String str:hashSet)
            System.out.println(str);
        System.out.println("以上是HashSet输出");


    }
}
