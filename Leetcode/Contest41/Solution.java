public class Solution {
    public static void main(String[] args) {
        int[] test1 = {1,12,-5,-6,50,3};
        int[] test2 = {0,4,0,3,2};
        int[] test3 = {0,4};
        int[] test4 = {5};
        int[] test5 = {4,0,4,3,3};
        int[] test6 = {-1};
        System.out.println(findMaxAverage(test1, 4));
        System.out.println("\n\n");
        System.out.println(findMaxAverage(test2, 1));
        System.out.println("\n\n");
        System.out.println(findMaxAverage(test3, 1));
        System.out.println("\n\n");
        System.out.println(findMaxAverage(test4, 1));
        System.out.println("\n\n");
        System.out.println(findMaxAverage(test5, 5));
        System.out.println("\n\n");
        System.out.println(findMaxAverage(test6, 1));
    }
    public static double findMaxAverage(int[] nums, int k) {
        if (nums.length == 1) {
            return nums[0];
        }
        double globalMax = Double.MIN_VALUE;
        int kMax = nums.length;
        double temp = Double.MIN_VALUE;
        for (int i = k; i <= kMax; i++) {
            temp = helperFunction(nums, i);
            if (temp > globalMax) {
                globalMax = temp;
            }
        }
        return globalMax;
    }
    public static double helperFunction(int[] nums, int k) {
        double max = Double.MIN_VALUE;
        double needle = Double.MIN_VALUE;
        for (int i = 0; i < k; i++) {
            max+= nums[i];
            needle=max;
        }
        for (int i = k; i < nums.length; i++) {
            // If the next group of 4 is larger
            needle +=(nums[i]-nums[i-k]);
            /*
            System.out.println("max: " + max);
            System.out.println("+nums["+i+"] :" + nums[i]);
            System.out.print("\t-nums["+(i-k)+"] :" + nums[i-k]+"\n");
            */
            if (needle > max) {
                //System.out.println("Max at index: " + i);
                max = needle;
            }
        }
        return max/k;
    }
}
