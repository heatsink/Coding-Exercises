/**
 * Insertion And Selection Sort Program
 * @author Sean Wallace
 * @version Lab Week 7
 */
public class BasicSort {
   public static int[] selectionSort(int[] array) {
      int[] newArray = new int[array.length];
      int min;
      for (int i = 0; i < array.length-1; i++) {
         min = i;
         for (int j = i+1; j < array.length; j++) {
            if (array[j] < array[min]) {
               min = j;
            }
         }
         int temp = array[i];
         array[i] = array[min];
         array[min] = temp;
      }
      return array;
   }
   public static int[] insertionSort(int[] array) {
      int item;
      int j;
      for (int i = 0; i < array.length; i++) {
         item = array[i];
         j = i;
         while (j > 0 && array[j-1] > item) {
            array[j] = array[j-1];
            j--;
         }
         array[j] = item;
      }
      return array;
   }
}
