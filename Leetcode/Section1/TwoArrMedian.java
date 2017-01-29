class TwoArrMedian {
    public static void main(String[] args) {
        int[] arr1 = { 4, 6, 10, 14 };
        int[] arr2 = { 9, 15, 20, 22, 23};
        test(arr1, arr2);
        int[] arr3 = { 20, 22, 23, 24};
        test(arr1, arr3);
    }
    static double twoMedian(int[] arr1, int[] arr2) {
        double min = 0.0;
        int odd = 0;
        int i;
        int j;
        if ((arr1.length + arr2.length) % 2 == 1) {
            odd = 1;
        }
        for (i = 0, j = 0; i + j < (arr1.length + arr2.length)/2 + odd;) {
            if (arr1[i] <= arr2[j]) {
                min = arr1[i];
                i++;
            }
            else {
                min = arr2[j];
                j++;
            }
        }
        if (odd == 0) {
            if (i < arr1.length) {
                min = (min + arr1[i])/ 2;
            }
            else {
                min = (min + arr2[j])/ 2;
            }
        }
        return min;
    }
    static void test(int[] arr1, int[] arr2) {
        double median = twoMedian(arr1, arr2);
        System.out.println(median);
    }
}
