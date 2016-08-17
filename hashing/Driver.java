public class Driver {
    public static void main(String[] args) {
      HashTable table = new HashTable(10);
      table.insert(20);
      testContains(table, 20);
      testContains(table, 40);
      table.insert(21);
      table.insert(22);
      table.rehash();
      table.rehash();
      table.insert(31);
      testContains(table, 20);
      testContains(table, 21);
      testContains(table, 22);
      testContains(table, 31);
      testContains(table, 21);
      table.insert(31);



    }
    public static void testContains(HashTable table, int key) {
      System.out.println("Testing to find: " + key);
      if (table.contains(key)) {
        System.out.println("\tResult: Yes!");
      }
      else {
        System.out.println("\tResult: No.");
      }
    }
}
