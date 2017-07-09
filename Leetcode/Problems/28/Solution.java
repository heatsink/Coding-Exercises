/* 20. Valid Parenthesis */
public class Solution {
    /*
    public static void main(String[] args) {
        String haystack = "";
        String needle = "";
        System.out.println("haystack: " + haystack);
        System.out.println("needle: " + needle);
        System.out.println("index: " + strStr(haystack, needle));

        String haystack2 = "mississippi";
        String needle2 = "pi";
        System.out.println("haystack: " + haystack2);
        System.out.println("needle: " + needle2);
        System.out.println("index: " + strStr(haystack2, needle2));

    }
    */
    public int strStr(String haystack, String needle) {
        if (needle.equals(haystack)) {
            return 0;
        }
        int needleSize = needle.length();
        for (int i = 0; i < haystack.length()-needleSize+1; i++) {
            System.out.println("testi: " + i);
            System.out.println(haystack.substring(i, i+needleSize));
            if (haystack.substring(i, i + needleSize).equals(needle)) {
                return i;
            }
        }
        return -1;
    }
}
