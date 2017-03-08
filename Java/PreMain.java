public class PreMain {
    static {
        System.out.println("This static thing happens before the main!");
        //System.exit(0);
    }
    static {
        System.out.println("Here's another static block!");
    }
    public static void main(String[] args) {
        System.out.println("Lame main.");

    }
}
