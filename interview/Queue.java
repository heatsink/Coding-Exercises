import java.util.PriorityQueue;
public class Queue {
    public static void main(String[] args) {
        PriorityQueue<Integer> queue = new PriorityQueue<Integer>();
        queue.add(1);
        queue.remove(1);
        PriorityQueue<String> queue2= new PriorityQueue<String>();
        queue2.add("dog");
        queue2.remove("dog");
    }
}
