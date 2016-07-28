/**
 * Generic Queue class using a circular array
 * @author Sean Wallace
 * @version Lab 2 Queue
 */
import java.lang.IllegalStateException;
public class MyQueue<T> {
   private final int DEFAULT_CAPACITY = 10;
   private int front, rear, size;
   private T[] queue;
   public MyQueue() {
      queue = (T[]) new Object[DEFAULT_CAPACITY];
      front = 0;
      rear = 0;
      size = 0;
   }
   public MyQueue(int initialCapacity) {
      queue = (T[]) new Object[initialCapacity];
      front = 0;
      rear = 0;
      size = 0;
   }
   public void enqueue(T element) throws IllegalStateException {
      if (size >= queue.length) {
         throw new IllegalStateException();
      }
      queue[rear] = element;
      rear = (rear + 1)%queue.length;
      size ++;
   }
   public T dequeue() throws IllegalStateException {
      if (size == 0){
         throw new IllegalStateException();
      }
      T temp = queue[front];
      front = (front + 1)%queue.length;
      size --;
      return temp;
   }
   public T first() throws IllegalStateException {
      if (size == 0) {
         throw new IllegalStateException();
      }
      return queue[front];
   }
   public boolean isEmpty() {
      if (size == 0) {
         return true;
      }
      return false;
   }
   public int qsize() {
      return size;
   }
}
