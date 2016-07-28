/**
 * Test cases for Insertion & Selection Sort using BasicSort.java
 * @author Sean Wallace
 * @version Lab Week 7
 */
public class Driver {
   public static void main(String[] args) {
      int[] array = {9,8,7,6,5,4,3,2,1,0};
      test(array, 0);

      int[] array2 = {0,1,2,3,4,5,6,7,8,9};
      test(array2, 0);

      int[] array3 = {29,20,73,34,64};
      test(array3, 0);

      int[] array4 = {9,8,7,6,5,4,3,2,1,0};
      test(array4, 1);

      int[] array5 = {9,8,7,6,5,4,3,2,1,0};
      test(array5, 1);

      int[] array6 = {9,8,7,6,5,4,3,2,1,0};
      test(array6, 1);
   }
   public static void test(int[] array, int method) {
      System.out.println("Original Array");
      print(array);
      if (method == 0) {
         //insertionSort
         System.out.println("\tInsertion Sort");
         array = BasicSort.insertionSort(array);
         print(array);
      }
      else if (method == 1) {
         //selectionSort
         System.out.println("\tSelection Sort");
         array = BasicSort.selectionSort(array);
         print(array);
      }
      else {
         System.out.println("You did not choose a correct method.");
      }
   }
   public static void print(int[] array) {
      for (int i = 0; i < array.length; i++) {
         System.out.print(array[i] + " ");
      }
      System.out.println("\n");

   }
}
