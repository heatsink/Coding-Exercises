class TwoSum {
    public static void main(String[] args) {
        int[] arr = { 2, 7, 11, 15 };
        int target = 9;
        int[] answer = twoSum(arr, target);
        for (int i = 0; i < 2; i++) {
            System.out.println(answer[i]);
        }
    }
    static int[] twoSum(int[] array, int target) {
        int[] answer = new int[2];
        int[] hash = new int[20];
        for (int i = 0; i < array.length; i++) {
            hash[array[i]] = i;
        }
        for (int i = 0; i < array.length; i++) {
            answer[0] = i;
            if (target-array[i] > 0 && hash[target-array[i]] > 0) {
                answer[1] = hash[target-array[i]];
                return answer;
            }
        }
        return answer;
    }
}

