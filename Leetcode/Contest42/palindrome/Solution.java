public class Solution {
    public static void main(String[] args) {
        String test1 = "racecar";
        String test2 = "abc";
        String test3 = "dog";
        String test4 = "ab";
        String test5 = "aaa";
        String test6 = "abc";
        test(test1);
        test(test2);
        test(test3);
        test(test4);
        test(test5);
        test(test6);
    }
    public static void test(String s) {
        /*
        System.out.println("Testing: " + s);
        System.out.println(isPalindrome(s));
        System.out.println("count: " + countSubstrings(s));
        System.out.println();
        */
        System.out.println("Testing: " + s);
        System.out.println("count: " + countSubstrings(s));
    }

    public static int countSubstrings(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int k = 1; k < s.length()-i+1; k++) {
                String sub = s.substring(i, i+k);
                System.out.println("sub:" + sub);
                count+= isPalindrome(sub);
            }
        }
        return count;
    }

    public static int isPalindrome(String s) {
        if (s.length() == 1) {
            return 1;
        }
        for (int i=0; i<s.length()/2; i++) {
            if (s.charAt(i) != s.charAt(s.length()-i-1)) {
                return 0;
            }
        }
        return 1;
    }
}
