/**
 * The Basic List Iterator interface for program 6a's Linked List.
 *
 * @author Sean Wallace
 * @version program6b
 */
 import java.util.Iterator;
public interface BasicListIterator<E> extends Iterator<E>
{
   public boolean hasPrevious();
   public E previous();
   //public boolean hasNext();
   //public E next();
   //public void remove();
}
