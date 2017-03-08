public class Solution {
    public static void main(String[] args) {
        String input = "babad";
        String output = longestPalindrome(input);
        System.out.println(output);

    }
    public static String longestPalindrome(String s) {
        String max = "";
        // For each generated possible substring
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                String substring = s.substring(i,j+1);
                System.out.println(substring);
                if (isPalindrome(substring)) {
                    //System.out.print(" Is a palindrome!\n");
                    if (substring.length() > max.length()) {
                        max = substring;
                    }
                }
                else {
                    //System.out.print(" NOT a palindrome!\n");
                }
            }
        }

        return max;
    }
    static boolean isPalindrome(String s) {
        if (s.length() == 1) {
            return true;
        }
        for (int i = 0; i < s.length()/2; i++) {
            if (s.charAt(i) != s.charAt(s.length()-i-1)) {
                //System.out.printf("FALSE: %c Vs %c", s.charAt(i), s.charAt(s.length()-i-1));
                return false;
            }
        }
        return true;
    }
}
