/* 8. atoi */
public class Solution {
    public static void main(String[] args) {
        String test = "12389";
        System.out.println("test: " + test);
        System.out.println(myAtoi(test));

        String test1 = "";
        System.out.println("test1: " + test1);
        System.out.println(myAtoi(test1));

        String test2 = "0";
        System.out.println("test2: " + test2);
        System.out.println(myAtoi(test2));

        String test3 = "-42";
        System.out.println("test3: " + test3);
        System.out.println(myAtoi(test3));

        String test4 = "+1";
        System.out.println("test4: " + test4);
        System.out.println(myAtoi(test4));

        String test5 = "-1";
        System.out.println("test5: " + test5);
        System.out.println(myAtoi(test5));

        String test6 = "010";
        System.out.println("test6: " + test6);
        System.out.println(myAtoi(test6));

        String test7 = "-0012a42";
        System.out.println("test7: " + test7);
        System.out.println(myAtoi(test7));

        String test8 = "214783648";
        System.out.println("test8: " + test8);
        System.out.println(myAtoi(test8));

    }
    public static int myAtoi(String str) {
        if (str == null || str.equals("")) {
            return 0;
        }
        str = str.trim();
        long num = 0;
        int sign = 1;
        int intIndex = 0;
        boolean signSet = false;
        boolean firstZero = false;
        for (intIndex = 0; intIndex < str.length(); intIndex++) {
            if (str.charAt(intIndex) == '-') {
                if (signSet == true) {
                    return 0;
                }
                System.out.println("Sign set!");
                signSet = true;
                sign = -1;
            }
            else if (str.charAt(intIndex) == '+') {
                if (signSet == true) {
                    return 0;
                }
                signSet = true;
            }
            else {
                System.out.println("hey");
                if (str.charAt(intIndex) != '+') {
                    num = (long)(str.charAt(intIndex)-'0');
                    System.out.println("numInit: " + num);
                    intIndex++;
                    break;
                }
            }
        }
        for (int i = intIndex; i < str.length(); i++) {
            if (str.charAt(i)-'0' == 0 && firstZero == false) {
                continue;
            }
            else if (str.charAt(i)-'0' > 9 || str.charAt(i)-'0' < 0) {
                System.out.println("num before sign1: " + num);
                if (sign == -1 && (num*sign + Integer.MIN_VALUE < 0)) {
                    return (int)Integer.MIN_VALUE;
                }
                else if ((long)num*sign - Integer.MAX_VALUE > 0){
                    return (int)Integer.MAX_VALUE;
                }
                return (int)num*sign;
            }
            else {
                firstZero = true;
                num= 10*num + (long)(str.charAt(i)-'0');
                System.out.println("numVal: " + num);
            }
        }
        System.out.println("Integer.MAX_VALUE: " + Integer.MAX_VALUE);
        System.out.println("num before sign: " + num);
        if (sign == -1 && (num*sign + Integer.MIN_VALUE < 0)) {
            return (int)Integer.MIN_VALUE;
        }
        else if ((long)num*sign - Integer.MAX_VALUE > 0){
            return (int)Integer.MAX_VALUE;
        }
        return (int)num*sign;
    }
}
