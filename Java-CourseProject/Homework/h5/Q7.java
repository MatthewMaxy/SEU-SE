import java.util.*;

import net.mindview.util.*;

public class Q7 {
    public static void main(String[] args) {
        int num = 0;
        Set<Character> set = new TreeSet<>();
        set.add('a');
        set.add('e');
        set.add('i');
        set.add('o');
        set.add('u');
        Set<String> words = new TreeSet<String>(
                new TextFile("SetOperations.java", "\\W+"));
        System.out.println(words);

        for (String c:words) {
            int num0= 0;
            char[] ch = c.toCharArray();
            for (char obj : ch)
                if (set.contains(obj)) {
                    num0++;
                    num++;
                }
            System.out.println(c + "中元音个数：" + num0);
        }
        System.out.println( "总元音个数：" + num);
    }

}


