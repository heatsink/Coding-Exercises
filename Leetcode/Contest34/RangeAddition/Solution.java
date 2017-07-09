import java.util.Arrays;
import java.util.List;
import java.util.Collections;
import java.util.ArrayList;
public class Solution {
    /*
    public static void main(String[] args) {
        int test[][] = { {2,2}, {3,3}};
        System.out.println(maxCount(3, 3, test));
    }
    */
    public int maxCount(int m, int n, int[][] ops) {
        if (ops.length == 0) {
            return m*n;
        }
        int aMin = 2,147,483,647;
        int bMin = 2,147,483,647;
        for (int i = 0; i < ops.length; i++) {
            if (ops[i][0] < aMin) {
                aMin = ops[i][0];
            }
            if (ops[i][1] < aMin) {
                bMin = ops[i][1];
            }
        }
        return aMin*bMin;

        /*
        if (ops.length == 0 || ops.length == 1) {
            return m*n;
        }
        int myArray[][] = new int[m][n];
        */
        /*
        System.out.println("ops length: " + ops.length);
        System.out.println("ops[0] length: " + ops[0].length);
        System.out.println("ops[0][0]: " + ops[0][0]);
        System.out.println("ops[0][1]: " + ops[0][1]);
        System.out.println("ops[1] length: " + ops[1].length);
        System.out.println("ops[1][0]: " + ops[1][0]);
        System.out.println("ops[1][1]: " + ops[1][1]);
        */

        /*
        for (int i = 0; i < ops.length; i++) {
            //System.out.println("\ni: " + i);
            for (int j = 0; j < ops[i][0]; j++) {
                //System.out.println("j: " + j);
                for (int k = 0; k < ops[i][1]; k++) {
                    //System.out.println("k: " + k);
                    myArray[j][k]++;
                }
            }
        }
        */
        /*
        if (ops.length == 0) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                myArray[i][j]++;
            }
        }
        }
        */
        /*
        for (int i = 0; i < myArray.length; i++) {
            for (int j = 0; j < myArray[i].length; j++) {
                System.out.println("tent: " + myArray[i][j]);
            }
        }
        */
        /*
        int globalMax = 0;
        int maxCount = 0;
        for (int i = 0; i < myArray.length; i++) {
            for (int j = 0; j < myArray[i].length; j++) {
                if (myArray[i][j] == globalMax) {
                    maxCount++;
                }
                if (myArray[i][j] > globalMax) {
                    globalMax = myArray[i][j];
                    maxCount = 1;
                }
            }
        }
        */

        //return findMax(myArray);
        //return maxCount;
    }
    /*
    public static int findMax(int[][] array) {
        int globalMax = 0;
        int maxCount = 0;
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                if (array[i][j] == globalMax) {
                    maxCount++;
                }
                if (array[i][j] > globalMax) {
                    globalMax = array[i][j];
                    maxCount = 1;
                }
            }
        }
        return maxCount;
    }
    */
}
