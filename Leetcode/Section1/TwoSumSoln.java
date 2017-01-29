import java.*;
import java.util.HashMap;
import java.util.Map;
public class TwoSumSoln {
    public static void main(String[] args) {
        int[] arr1 = {2, 4, 6, 8};
        int[] ans = twoSum(arr1, 10);
        for (int i = 0; i < ans.length; i++) {
            System.out.println(ans[i]);
        }
    }
    public static int[] twoSum(int[] arr, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            int comp = target - arr[i];
            if (map.containsKey(comp)) {
                return new int[] {map.get(comp), i};
            }
            else {
                map.put(arr[i], i);
            }
        }
        throw new IllegalArgumentException("no solution.");
    }
}
