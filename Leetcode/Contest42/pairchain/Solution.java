import java.util.ArrayList;
import java.util.Collections;
public class Solution {
    public static void main(String[] args) {
    }
    public int findLongestChain(int[][] pairs) {
        int globalMax = 0;
        // PreSort
        for (int i = 1; i < pairs.length; i++) {
            for (int j = i; j < pairs.length; j++) {
                if (pairs[j][0] < pairs[j-1][0]) {
                    // Swap!
                    int tempA = pairs[j][0];
                    int tempB = pairs[j][1];

                    pairs[j][0] = pairs[j-1][0];
                    pairs[j][1] = pairs[j-1][1];

                    pairs[j-1][0] = tempA;
                    pairs[j-1][1] = tempB;

                }
            }
        }
        int localMax = 0;
        for (int i = 1; i < pairs.length; i++) {
            if (pairs[i-1][0] == (pairs[i][0] - 2)) {
                localMax++;
            }
            else {
                if (localMax > globalMax) {
                    globalMax = localMax;
                    localMax = 0;
                }
            }

        }
        return globalMax;
    }
}
