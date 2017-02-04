public class atoi {
    public static void main(String[] args) {
        System.out.println("Hey I remember how to write Java");
        String test = "abc";
        int testAtoi = atoi(test);
        System.out.println("test: " + test + " atoi: " + testAtoi);
    }
    public static int atoi(String cur) {
        int total = 0;
        for (int i = 0; i < cur.length(); i++) {
            System.out.println((int)cur.charAt(i));
            total+=(int)cur.charAt(i);
        }
        return total;

    }
}
