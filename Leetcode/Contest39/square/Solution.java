import java.lang.Math;
public class Solution {
    public static void main(String[] args) {
        int test1 = 11;
        int test2 = 5;
        int test3 = 4;
        int test4 = 1;
        int test5 = 0;
        int test6 = 13;
        testCase(test1);
        testCase(test2);
        testCase(test3);
        testCase(test4);
        testCase(test5);
        testCase(test6);
    }
    public static void testCase(int test) {
        System.out.println("Testing: " + test);
        System.out.println("Judging: " + judgeSquareSum(test));
    }
    public static boolean judgeSquareSum(int c) {
        for (int i = 0; i <= c; i++) {
            if (i*i+i*i ==c) {
                return true;
            }
            System.out.println("i: " + i);
            System.out.println(Math.sqrt(c-i));
            double cur = Math.sqrt(c-i);
            if (cur% 1 == 0 && (approxEqual(i*i + cur*cur, c, 0.01))) {
                return true;
            }
        }
        return false;
    }
    public static boolean approxEqual(double a, double b, double eps) {
        return Math.abs(a-b)<eps;
    }
}
