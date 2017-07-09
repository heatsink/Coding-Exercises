import java.lang.Math;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
public class LogSystem {
    ArrayList<Long> timeTable = new ArrayList<Long>();
    public LogSystem() {

    }
    public static void main(String[] args) {
        int test1 = 11;
        String string1 = "2017:01:01:23:59:59";
        LogSystem log = new LogSystem();
        log.put(test1, string1);
        int test2 = 5;
        int test3 = 4;
        int test4 = 1;
        int test5 = 0;
        int test6 = 13;
        System.out.println(getTime(string1));
    }
    public void put(int id, String timestamp) {
        timeTable.add(getTime(timestamp));
        Collections.sort(timeTable);
    }
    public static long getTime(String timestamp) {
        Scanner scan = new Scanner(timestamp);
        scan.useDelimiter(":");
        return Integer.parseInt(scan.next())*12* //yr
        Integer.parseInt(scan.next())*31*
        Integer.parseInt(scan.next())*24*
        Integer.parseInt(scan.next())*60*
        Integer.parseInt(scan.next())*60*
        Integer.parseInt(scan.next());
    }
    public List<Integer> retrieve(String s, String e, String gra) {
    }
    /*
    public static boolean judgeSquareSum(int c) {
        return false;
    }
    */
}
