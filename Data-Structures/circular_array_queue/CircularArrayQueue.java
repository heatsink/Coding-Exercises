import java.util.Collection;
import java.lang.Exception;
public class CircularArrayQueue<T> implements QueueADT<T> {
   private final int DEFAULT_CAPACITY = 10;
   private int front, rear, count;
   private T[] queue;
   public CircularArrayQueue() {
      CircularArrayQueue(DEFAULT_CAPACITY);
   }
   public CircularArrayQueue(int initialCapacity) {
      queue = (T[]) new Object[initialCapacity];
      front = 0;
      rear = 0;
      count = 0;
   }
   public void enqueue(T element) {
      rear = (rear + 1)%queue.length;
      queue[rear] = element;
      count ++;
   }
   public T dequeue() throws EmptyCollectionException {
      T temp = queue[front];
      front = (front + 1)%queue.length;
      count --;
      return temp;
   }
   public T first() throws EmptyCollectionException {
      return queue[front];
   }
   public boolean isEmpty() {
      if (rear == (front - 1)%queue.length) {
         return true;
      }
      return false;
   }
   public int size() {
      return queue.length;
   }
   public void expandCapacity() {
      
   }
}
