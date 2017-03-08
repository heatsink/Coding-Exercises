import java.util.Arrays;
public class NullString {
    public static void main(String[] args) {
        String[] stringy = new String[10];
        for (int i = 0; i < stringy.length; i++) {
            stringy[i] = null;
        }
        for (int i = 2; i < stringy.length; i+=2) {
            stringy[i] = "numy"+i;
        }
        System.out.println(Arrays.toString(stringy));
        for (int i = 0; i < stringy.length; i++) {
            if (stringy[i] != null) {
                System.out.printf("we cool: %s\n", stringy[i]);
            }
            else {
                System.out.printf("no chill: %s\n", stringy[i]);
            }
            if (stringy[i] == null) {
                System.out.printf("no chill doesn't break: %s\n", stringy[i]);
            }
        }
    }
}
