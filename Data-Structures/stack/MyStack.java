import java.lang.Exception;
public class MyStack{
   private int nodesLeft;
   private Node top;
   public MyStack() {
      top = null;
      nodesLeft = 100;
   }
   public void push(int num) {
      Node newNode = new Node(num);
      newNode.next = top;
      top = newNode;
   }
   public int pop() {
      if (empty()) {
         throw new NullPointerException();
      }
      int stored = top.data;
      top = top.next;
      return stored;
   }
   public int top() {
      return top.data;
   }
   public boolean empty() {
      if (top == null) {
         return true;
      }
      return false;
   }
   public boolean full() {
      if (nodesLeft > 0) {
         return true;
      }
      return false;
   }
   private class Node {
      private int data;
      private Node next;
      public Node(int data) {
         next = null;
         this.data = data;
      }
   }
}
