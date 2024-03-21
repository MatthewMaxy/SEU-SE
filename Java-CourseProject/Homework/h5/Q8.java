import java.util.HashMap;
import java.util.LinkedHashMap;

public class Q8 {
    public static void main(String[] args) {
        HashMap<Integer,String >hashMap=new HashMap<>();
        LinkedHashMap<Integer,String>linkedHashMap=new LinkedHashMap<>();
        hashMap.put(1,"aaa");
        hashMap.put(2,"bbb");
        hashMap.put(3,"ccc");
        hashMap.put(4,"ddd");
        for(int i=0;i<hashMap.size();i++)
        {
            System.out.println(hashMap.get(i+1));
            linkedHashMap.put(i+1,hashMap.get(i+1));
        }
        for(int i=0;i<linkedHashMap.size();i++)
        {
            System.out.println(linkedHashMap.get(i+1));
        }
    }
}
