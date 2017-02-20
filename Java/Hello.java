/*
 * Inspired from a silly Quora thread.
 * https://www.quora.com/Homework-Question-How-do-I-write-a-program-that-produces-the-following-output-1
 */
import java.util.Random;
public class Hello {
    private static Random rand = new Random();
    public static void main(String[] args) {
        String ans = recurse("smile!", 0);
    }
    static String recurse(String target, int depth) {
        String candidate = "";
        while (!candidate.equals(target)) {
            candidate = "";
            for (int i = 0; i < target.length(); i++) {
                int num = rand.nextInt(10);
                if (num > 8) {
                    if (rand.nextInt(5) > 3) {
                        candidate+= '!';
                    }
                }
                else {
                    if (num > 5) {
                        candidate+= (char)(rand.nextInt(26) + 97);
                    }
                    else {
                        candidate += (char) (rand.nextInt(26) + 65);
                    }
                }
            }
        }
        if (depth > 0) {
            candidate += recurse(target, --depth);
        }
        System.out.println(candidate);
        return candidate;
    }
}
