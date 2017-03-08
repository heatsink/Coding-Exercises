import java.util.HashMap;
public class Hash {
    public static void main(String[] args) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        HashMap<Integer, String> map2 = new HashMap<Integer, String>();
        map.put(4, 7);
        map2.put(4, "dog");
        int val = map.remove(4);
        System.out.println(val);
        if (map2.containsKey(4)) {
            System.out.println("dog found!");
            System.out.println("Dog found at index" + map2.get(4));
            map2.remove(4);
        }
        if (map.containsKey(7)) {
            System.out.println("7 found!");
        }
        /*
        val = map.remove(5);
        System.out.println(val);
        */
    }
}
