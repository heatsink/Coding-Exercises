import java.util.Arrays;
import java.util.List;
import java.util.Collections;
import java.util.ArrayList;
public class Solution {
    /*
    public static void main(String[] args) {
        String[] test1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
        String[] test2 = {"KFC", "Burger King", "Tapioca Express", "Shogun"};
        String[] answer = findRestaurant(test1, test2);
        System.out.println("Answer:");
        for (int i = 0; i < answer.length; i++) {
            System.out.println(answer[i]);
        }
    }
    */
    public String[] findRestaurant(String[] list1, String[] list2) {
        int globalMin = list1.length-1 + list2.length-1;
        String[] answer = new String[list1.length];
        int answerCount = 0;
        for (int i = 0; i < list1.length; i++) {
            for (int j = 0; j < list2.length; j++) {
                if (list1[i].equals(list2[j])) {
                    //System.out.println("Match");
                    //System.out.println("index: " + (i+j));
                    if (i+j <= globalMin) {
                        globalMin = i+j;
                        answer[answerCount] = list1[i];
                        answerCount++;
                    }
                }
            }
        }
        List<String> list = new ArrayList<String>(Arrays.asList(answer));
        list.removeAll(Collections.singleton(null));
        answer = list.toArray(new String[list.size()]);
        if (answer.length > 1) {
            Arrays.sort(answer);
        }
        return answer;
    }
}
