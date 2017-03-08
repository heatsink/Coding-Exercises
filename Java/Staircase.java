public class Staircase {
    public static void main(String[] args) {

    }
    static int stairCases(int bricks, int stepSize) {
        int solutions = 0;

        for (int i = bricks; i > 0; i--) {
        }
        solutions += stairCases(bricks, --stepSize);
        return solutions;

    }
}
