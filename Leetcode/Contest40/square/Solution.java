import java.util.List;
import java.util.ArrayList;
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    private class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> list = new ArrayList<Double>();
        List<Integer> levels = new ArrayList<Integer>();
        recurse(root, list, 0, levels);
        // Compute Averages
        for (int i=0; i<list.size(); i++) {
            list.set(i, list.get(i)/(levels.get(i)));
        }
        return list;
    }
    public void recurse(TreeNode root, List<Double> list, int level, List<Integer> levels) {
        level++;
        // Check ArrayList length
        if (root != null) {
            if (list.size() < level) {
                list.add((double)root.val);
                levels.add(1);
            }
            else {
                list.set(level-1, list.get(level-1)+root.val);
                levels.set(level-1, levels.get(level-1)+1);
            }
            recurse(root.left, list, level, levels);
            recurse(root.right, list, level, levels);
        }
    }
}
