/**
 * The full implementation of the basic array list class
 *
 * @author Sean Wallace
 * @version program2b
 */
import java.util.NoSuchElementException;
public class BasicArrayList implements BasicList
{
   public static final int DEFAULT_CAPACITY = 10;
   private int size;
   private Object[] objects;
   public BasicArrayList()
   {
      objects = new Object[DEFAULT_CAPACITY];
      size = 0;
   }
   public BasicArrayList(int capacity)
   {
      if(capacity >=  DEFAULT_CAPACITY)
      {
         objects = new Object[capacity];
      }
      else
      {
         objects = new Object[DEFAULT_CAPACITY];
      }
      size = 0;
   }
   private void doubleCapacity()
   {
      Object[] objects2 = new Object[2*capacity()];
      for (int i = 0; i <= capacity() - 1; i++)
      {
         objects2[i] = objects[i];
      }
      objects = objects2;
   }
   public void add(java.lang.Object o)
   {
      if (size() >= capacity())
      {
         doubleCapacity();
      }
      objects[size] = o;
      size++;
   }
   public void add(int index, java.lang.Object o)
   {
      if (index < 0 || index > size())
      {
         throw new IndexOutOfBoundsException();
      }
      if (size() == capacity())
      {
         doubleCapacity();
      }
      if (index == size())
      {
         objects[size] = o;
      }
      else
      {
         shiftElementsForward(index);
         objects[index] = o;
      }
      size++;
   }
   private void shiftElementsBack(int index)
   {
      for (int i = index; i < size - 1; i++)
      {
         objects[i] = objects[i+1];
      }
   }
   private void shiftElementsForward(int index)
   {
      for (int i = size; i > index; i--)
      {
         objects[i] = objects[i-1];
      }
   }
   public java.lang.Object get(int index)
   {
      if (index < 0 || index >= size())
      {
         throw new IndexOutOfBoundsException();
      }
      else
      {
         return objects[index];
      }
   }
   public java.lang.Object set(int index, java.lang.Object o)
   {
      if (index >= size())
      {
         throw new IndexOutOfBoundsException();
      }
      else if (index > objects.length || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      else
      {
         Object storedObject = objects[index];
         objects[index] = o;
         return storedObject;
      }
   }
   public java.lang.Object remove(int index)
   {
      if (index >= size()  || index < 0)
      {
         throw new IndexOutOfBoundsException();
      }
      Object storedObject = objects[index];
      shiftElementsBack(index);
      size--;
      return storedObject;
   }
   public int size()
   {
      return size;
   }
   public boolean contains(java.lang.Object o)
   {
      if (o == null)
      {
         return false;
      }
      for (int i = 0; i < size(); i++)
      {
         if (objects[i] != null)
         {
            if (objects[i].getClass().equals(o.getClass()) && objects[i].equals(o))
            {
               return true;
            }
         }
      }
      return false;
   }
   public void clear()
   {
      for (int i = 0; i < capacity(); i++)
      {
         objects[i] = null;
      }
      size = 0;
   }
   public int indexOf(java.lang.Object element)
   {
      for (int i = 0; i < capacity(); i++)
      {
         if (objects[i] != null && element != null)
         {
            if (objects[i].getClass().equals(element.getClass()))
            {
               if (objects[i].equals(element))
               {
                  return i;
               }
            }
         }
      }
      throw new NoSuchElementException();
   }
   public int capacity()
   {
      return objects.length;
   }
   public void trimToSize()
   {
      if (size < DEFAULT_CAPACITY && capacity() > DEFAULT_CAPACITY)
      {
         Object[] objects2 = new Object[DEFAULT_CAPACITY];
         for (int i = 0; i < size; i++)
         {
            objects2[i] = objects[i];
         }
         objects = objects2;
      }
      //if (size() > DEFAULT_CAPACITY)
      else if (size > DEFAULT_CAPACITY)
      {
         Object[] objects2 = new Object[size];
         for (int i = 0; i < size; i++)
         {
            objects2[i] = objects[i];
         }
         objects = objects2;
      }
   }
}
