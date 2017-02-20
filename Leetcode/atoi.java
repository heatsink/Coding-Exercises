public class atoi {
    public static void main(String[] args) {
        String test = "123";
        int testAtoi = atoi(test);
        System.out.println("test: " + test + " atoi: " + testAtoi);
    }
    public static int atoi(String cur) {
        int total = 0;
        for (int i = 0; i < cur.length(); i++) {
            int temp = cur.charAt(i);
            if (temp >= '0' && temp <= '9') {
                total = 10*total + (int)cur.charAt(i) - '0';
            }
        }
        return total;

    }
}
