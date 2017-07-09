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
        int max = (int)Math.sqrt(c);
        for (int i = 0; i <= max; i++) {
            int i2c = i*i;
            if (Math.sqrt(c-i2c)%1==0) {
                return true;
            }
            /*
            for (int j = 0; j <= max; j++) {
                if (i2c+j*j==c) {
                    return true;
                }
            }
            */
        }
        return false;
    }
    /*
    public static boolean approxEqual(double a, double b, double eps) {
        return Math.abs(a-b)<eps;
    }
    */
}
