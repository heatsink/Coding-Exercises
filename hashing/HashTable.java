/*
 * A simple hash table for positive integers only.
 * Uses quadratic probing.
 * @author Sean Wallace
 * @version 1
 */
 import java.lang.Exception;
 import java.util.NoSuchElementException;
 import java.math.BigInteger;
public class HashTable {
  private int[] table;
  private int size;

  /**
   * Constructs a new HashTable with default capacity 10.
   */
  public HashTable() {
    new HashTable(10);
  }

  /**
   * Constructs a new HashTable with a variable capacity.
   * @param int - capacity must be 10 or greater.
   */
  public HashTable(int capacity) {
    if (capacity < 10) {
      //throw new Exception("Invalid capacity exception. Value must be 10 or greater.");
    }
    table = new int[capacity];
  }

  /**
   * @param String - The key to be inserted into the HashTable.
   * @return the integer hash value of the key.
   */
  public int hashValue(int key) {
    return key % table.length;
  }

  /**
   * Inserts a key into the HashTable.
   * @param int - the key inserted into the HashTable.
   */
  public void insert(int key) {
    if (key < 1) {
      //throw new Exception("Invalid key excpetion. Value must be a positive integer.");
    }
    size++;
    if (!isLoadFactor()) {
      rehash();
    }
    // Do quadratic probing here.
    table[hashValue(key)] = key;
  }

  /**
   * Checks whether or not the load factor will exceed 0.5 after insertion.
   * @return boolean - True if load factor will still remain below 0.5.
   */
  public boolean isLoadFactor() {
    double loadFactor = (double)(size + 1)/table.length;
    if (loadFactor > 0.5) {
      return false;
    }
    return true;
  }

  /**
   * Determines whether a specified key value exists within the hash table.
   * @param int - The key to search for within the hash table.
   * @return boolean - True if the hash table contains the key specified.
   */
  public boolean contains(int key) {
    for (int i = 0; i < table.length; i++) {
      if (table[i] == key) {
        System.out.println("Note: " + key + " found at index: " + i);
        return true;
      }
    }
    return false;
  }

  /**
   * Removes a specified key value within the hash table, if it exists.
   * @param int - The key to be removed from the hash table.
   * @throws NoSuchElementException - NoSuchElementException if key not found.
   */
  public void remove(int key){
    if (!contains(key)) {
      //throw new NoSuchElementException();
    }
    size--;
  }

  /**
   * Doubles the capacity of the hash table.
   */
  public void rehash() {
    int[] oldCopy = table;
    //Better efficiency by modifying capacity to always be prime
    table = new int[2*table.length];
    for (int i = 0; i < oldCopy.length; i++) {
      if (oldCopy[i] > 0) {
        insert(oldCopy[i]);
      }
    }
  }

  /**
   * Returns the current number of elements stored in the hash table.
   * @return The current number of elements stored.
   */
  public int size() {
    return size;
  }
}
