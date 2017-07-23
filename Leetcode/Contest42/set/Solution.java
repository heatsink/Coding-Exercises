public class Solution {
    public static void main(String[] args) {
        int[] test1 = {1, 2, 2, 4};
        int[] test2 = {2, 2};
        int[] answer = findErrorNums(test1);
        for (int i = 0; i < answer.length; i++) {
            System.out.println(answer[i]);
        }
        int[] answer2 = findErrorNums(test2);
        for (int i = 0; i < answer2.length; i++) {
            System.out.println(answer2[i]);
        }
    }
    public static int[] findErrorNums(int[] nums) {
        int table[] = new int[100000];
        int[] answer = new int[2];
        for (int i=0; i<nums.length; i++) {
            if (table[nums[i]] != 0) {
                answer[0]=nums[i];
            }
            table[nums[i]]++;
            //System.out.println("Add: " + nums[i]);
        }
        for (int i=1; i < table.length; i++) {
            if (table[i] == 0) {
                answer[1] = i;
                return answer;
            }
        }
        return answer;
    }
}
