import java.util.Scanner;
public class Dinner {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int weeks = 0;
        if (scan.hasNextInt()) {
            weeks = scan.nextInt();
        }
        //System.out.println("Weeks: " + weeks);
        // How many weeks to calculate?
        for (int i = 0; i < weeks; i++) {
            int friends = 0;
            int max = 0;
            // Calculate and return every single week
            if (scan.hasNextInt()) {
                friends = scan.nextInt();
            }
            for (int j = 0; j < friends; j++) {
                int temp = 0;
                //System.out.println("Friend found\n");
                if (scan.hasNextInt()) {
                    temp += scan.nextInt();
                }
                if (scan.hasNextInt()) {
                    temp += scan.nextInt();
                }
                if (temp > max) {
                    max = temp;
                }
            }
            //System.out.println("Max: " + max);
            if (max > 230) {
                System.out.println("0");
            }
            else {
                System.out.println(240-max-10);
                //max -= 10;
                //max += 240;
                //System.out.println(max);
            }
        }
        //System.out.println("End program");
        System.exit(0);
    }
}
