import java.util.Stack;
/* 20. Valid Parenthesis */
public class Solution {
    public static void main(String[] args) {
        String test = "({";
        System.out.println("test: " + test);
        System.out.println(isValid(test));

        String test2 = "()[]{}";
        System.out.println("test: " + test2);
        System.out.println(isValid(test2));

        String test3 = "){";
        System.out.println("test: " + test3);
        System.out.println(isValid(test3));

    }
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        for (char c : s.toCharArray()) {
            switch (c) {
                case '(':
                    stack.push(')');
                    break;
                case '{':
                    stack.push('}');
                    break;
                case '[':
                    stack.push(']');
                    break;
                default:
                    if (stack.empty() || c != stack.pop()) {
                        return false;
                    }
                    break;
            }
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
}
