/**
 * The Basic Linked List class for Program 6b.
 *
 * @author Sean Wallace
 * @version program6b
 */
 import java.lang.Iterable;
 import java.util.Iterator;
 import java.lang.Exception;
 import java.util.NoSuchElementException;
public class BasicLinkedList<E> implements BasicList<E>
{
   private Node current;
   private Node head;
   private int size;
   public BasicLinkedList()
   {
      head = null;
      current = null;
      size = 0;
   }
   public void add(E element)
   {
      size++;
      if (head == null)
      {
         head = new Node(element);
         current = head;
         return;
      }
      current.next = new Node(element);
      Node temp = current;
      current = current.next;
      current.previous = temp;
   }
   public void add(int index, E element)
   {
      if (index > size || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      size ++;
      if (index == 0)
      {
         Node currentNode = head;
         head = new Node(element);
         head.next = currentNode;
      }
      else if (index == size)
      {
         add(element);
      }
      else
      {
         Node currentNode = head;
         for (int i = 0; i < index - 1; i++)
         {
            currentNode = currentNode.next;
         }
         Node tempNode = currentNode.next;
         currentNode.next = new Node(element);
         currentNode = currentNode.next;
         currentNode.next = tempNode;
      }
   }
   public BasicListIterator<E> basicListIterator()
   {
      return new Iterator();
   }
   public void clear()
   {
      size = 0;
      head = null;
   }
   public boolean contains(E element)
   {
      Node currentNode = head;
      if (element == null)
      {
         for (int i = 0; i < size - 1; i++)
         {
            if (currentNode.data == null)
            {
               return true;
            }
            currentNode = currentNode.next;
         }
      }
      currentNode = head;
      for (int i = 0; i < size; i++)
      {
         if (currentNode.data.equals(element))
         {
            return true;
         }
         currentNode = currentNode.next;
      }
      return false;
   }
   public E get(int index)
   {
      if (index >= size || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      Node currentNode = head;
      for (int i = 0; i < index; i++)
      {
         currentNode = currentNode.next;
         System.out.println(currentNode);
      }
      return currentNode.data;
   }
   public int indexOf(E element)
   {
      Node currentNode = head;
      if (element == null)
      {
         for (int i = 0; i < size; i++)
         {
            if (currentNode.data == null)
            {
               return i;
            }
            currentNode = currentNode.next;
         }
      }
      currentNode = head;
      for (int i = 0; i < size; i++)
      {
         if (currentNode.data.equals(element))
         {
            return i;
         }
         currentNode = currentNode.next;
      }
      throw new NoSuchElementException();
   }
   public java.util.Iterator<E> iterator()
   {
      return new Iterator();
   }
   public E remove(int index)
   {
      if (index >= size || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      size --;
      Node currentNode = head;
      E removedNode;
      if (index == 0)
      {
         removedNode = head.data;
         currentNode = currentNode.next;
         head = currentNode;
      }
      else if (index == size)
      {
         for (int i = 0; i < size - 1; i++)
         {
            currentNode = currentNode.next;
         }
         removedNode = currentNode.next.data;
         currentNode.next = null;
      }
      else
      {
         for (int i = 0; i < index - 1; i++)
         {
            currentNode = currentNode.next;
         }
         Node temp = (currentNode.next).next;
         removedNode = currentNode.next.data;
         currentNode.next = null;
         currentNode.next = temp;
      }
      return removedNode;
   }
   public E set(int index, E element)
   {
      if (index >= size || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      Node currentNode = head;
      for (int i = 0; i < index; i++)
      {
         currentNode = currentNode.next;
      }
      E tempData = currentNode.data;
      currentNode.data = element;
      return tempData;
   }
   public int size()
   {
      return size;
   }
   private class Iterator implements BasicListIterator<E>
   {
      private int index = 0;
      private Node currentNode = head;
      public boolean hasPrevious()
      {
         if (index > 0 && index <= size)
         {
            return true;
         }
         else
         {
            return false;
         }
      }
      public E previous()
      {
         if (index <= 0 || index > size)
         {
            throw new NoSuchElementException();
         }
         index --;
         E temp = currentNode.data;
         currentNode = currentNode.previous;
         return temp;
      }
      public boolean hasNext()
      {
         if (size < 1)
         {
            return false;
         }
         if (index >= size)
         {
            return false;
         }
         return true;
      }
      public E next()
      {
         if (index >= size)
         {
            throw new NoSuchElementException();
         }
         index++;
         E temp = currentNode.data;
         if (index < size)
         {
            currentNode = currentNode.next;
         }
         return temp;
      }
      public void remove()
      {
         throw new UnsupportedOperationException();
      }
   }
   private class Node
   {
      public E data;
      public Node next;
      public Node previous;
      public Node(E data)
      {
         this.data = data;
         next = null;
      }
   }
}
