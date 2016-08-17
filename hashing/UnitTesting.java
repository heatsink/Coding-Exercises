/**
 * This UnitTesting class for program 1a is designed to keep track of the tests run
 * and also keep track of how many of them detected errors.
 *
 *@author Sean Wallace
 *@version Program 1a
 */
import java.lang.*;
// Note to self: to throw excptions; throw new rnuTimeException("message");
public class UnitTesting
{
   private static int numTestsRun; //Increments for every test ran
   private static int numTestsFailed; //Increments for every failed test
   public static int testsRun()
   {
      return numTestsRun;
   }
   public static int testsFailed()
   {
      return numTestsFailed;
   }
   public static void assertTrue(boolean actual)
   {
      Throwable throwable = new Throwable("Error: Expected true, found false");
      if (actual != true)
      {
         throwable.printStackTrace(); //Error: Expected true, found false
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertFalse(boolean actual)
   {
      Throwable throwable = new Throwable("Error: Expected false, found true");
      if (actual != false)
      {
         throwable.printStackTrace(); //Error: Expected false, found true
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertEquals(long expect, long actual)
   {
      Throwable throwable = new Throwable("Error: Expected " + expect + ", found " + actual);
      if (expect != actual)
      {
         throwable.printStackTrace(); //Error: Expected X, found Y
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertEquals(double expect, double actual, double epsilon)
   {
      Throwable throwable = new Throwable("Error: Expected " + expect + " +/-" + epsilon +
            ", found " + actual);
      if (!(Math.abs(Math.abs(expect) - Math.abs(actual)) <= epsilon))
      {
         throwable.printStackTrace(); //Error: Expected X +/-E, found Y
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertEqualsObject(java.lang.Object expect, java.lang.Object actual)
   {
      Throwable throwable = new Throwable("Error: Expected object equality, found inequality");
      if (!(expect.equals(actual)))
      {
         throwable.printStackTrace(); //Error: Expected object equality, found inequality
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertEqualsReference(java.lang.Object expect, java.lang.Object actual)
   {
      Throwable throwable = new Throwable("Error: Expected reference equality, found inequality");
      if (!(expect == actual))
      {
         throwable.printStackTrace(); //Error: Expected reference equality, found inequality
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertNull(java.lang.Object actual)
   {
      Throwable throwable = new Throwable("Error: Expected null, found non-null");
      if (actual != null)
      {
         throwable.printStackTrace(); //Error: Expected null, found non-null
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void assertNotNull(java.lang.Object actual)
   {
      Throwable throwable = new Throwable("Error: Expected non-null, found null");
      if (actual == null)
      {
         throwable.printStackTrace(); //Error: Expected non-null, found null
         numTestsFailed++;
      }
      numTestsRun++;
   }
   public static void fail()
   {
      Throwable throwable = new Throwable("Error: Explicit failure");
      throwable.printStackTrace(); //Error: Explicit failure
      numTestsFailed++;
      numTestsRun++;
   }
}
