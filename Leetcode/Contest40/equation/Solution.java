import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        System.out.println("Solution: " + solveEquation("x+5-3+x=6+x-2"));
        System.out.println("Solution: " + solveEquation("x=x"));
        System.out.println("Solution: " + solveEquation("2x=x"));
        System.out.println("Solution: " + solveEquation("2x+3x-6x=x+2"));
        System.out.println("Solution: " + solveEquation("x=x+2"));
    }
    public static String solveEquation(String equation) {
        int leftX = 0;
        int rightNum = 0;
        Scanner scan = new Scanner(equation);
        scan.useDelimiter("=");
        String left = scan.next();
        String right = scan.next();

        Scanner leftScan = new Scanner(left);
        int leftMultiplier = 1;
        int leftSign = 1;
        for (int i=0; i<left.length(); i++) {
            if (isValid(left.charAt(i))) {
                if (left.charAt(i) == 'x') {
                    leftX+=leftMultiplier*leftSign;
                }
                if (left.charAt(i) == '-') {
                    leftSign = -1;
                }
                if (left.charAt(i) == '-') {
                    leftSign = 1;
                }
            }
            else {
                if (leftScan.hasNextInt()) {
                    leftMultiplier = leftScan.nextInt();
                }
            }

        }
        int rightMultiplier = 1;
        int rightSign = 1;
        Scanner rightScan = new Scanner(right);
        for (int i=0; i<right.length(); i++) {
            if (isValid(right.charAt(i))) {
                if (right.charAt(i) == 'x') {
                    leftX-=rightMultiplier*rightSign;
                }
                if (right.charAt(i) == '-') {
                    rightSign = -1;
                }
                if (right.charAt(i) == '-') {
                    rightSign = 1;
                }
            }
            else {
                if (rightScan.hasNextInt()) {
                    rightMultiplier = rightScan.nextInt();
                }
            }
        }
        System.out.println();
        System.out.println(left);
        System.out.println(right);
        return "No Solution";
    }
    public static boolean isValid(char val) {
        if (val == 'x' || val == '+' || val == '-') {
            return true;
        }
        return false;
    }
}
