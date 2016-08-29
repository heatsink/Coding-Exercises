/**
 * A Heap Class containing Integers representing
 * both prirority and object name
 * @author Sean Wallace
 * @version Lab Week 3
 */
public class MyHeap {
   private static int DEFAULT_CAPACITY = 50;
   private int currentSize; // Number of elements in array
   private int[] array;
   public MyHeap() {
      this(DEFAULT_CAPACITY + 1);
   }
   public MyHeap(int capacity) {
      array = new int[capacity + 1];
   }
   public boolean buildHeap (int[] input) {
      if (input.length > array.length) {
         return false;
      }
      // Shape Property
      array[0] = -1;
      for (int i = 1; i < input.length + 1; i++) {
         insert(input[i-1]);
      }
      // Heap Property
      for (int i = currentSize/2; i > 0; i--) {
         driftDown(i);
      }
      return true;
   }
   public int[] arrayContents(){
      int[] contents = new int[currentSize];
      for (int i = 0; i < currentSize; i++) {
         contents[i] = array[i+1];
      }
      return contents;
   }
   public boolean insert(int input) {
      if (isFull()) {
         return false;
      }
      currentSize++;
      array[currentSize] = input;
      driftUp(currentSize);
      return true;
   }
   public int findMax() {
      return array[1];
   }
   public int deleteMax() {
      int temp = array[1];
      array[1] = array[currentSize];
      currentSize--;
      driftDown(1);
      return temp;
   }
   public boolean isEmpty() {
      if (currentSize > 0) {
         return false;
      }
      return true;
   }
   public boolean isFull() {
      if (currentSize >= array.length -1) {
         return true;
      }
      return false;
   }
   public int getHeapCap() {
      return array.length - 1;
   }
   public int getHeapSize() {
      return currentSize;
   }
   public void driftDown(int hole) {
      int child;
      int temp = array[hole];
      while (hole * 2 <= currentSize) {
         child = hole * 2;
         if (child != currentSize &&
               array[child + 1] > array[child]) {
                  child ++;
               }
         if (array[child] > temp) {
            array[hole] = array[child];
         }
         else {
            break;
         }
         hole = child;
      }
      array[hole] = temp;
   }
   public void driftUp(int hole) {
      int temp = array[currentSize];
      while (hole > 1 && temp > array[hole/2]) {
         array[hole] = array[hole/2];
         hole = hole/2;
      }
      array[hole] = temp;
   }
}
