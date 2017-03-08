import java.lang.Exception;
public class Exceptions {
    public static void main(String[] args) throws MyException{
        System.out.println("hello");
        //MyException ex = new MyException("wot");
        MyException ex = new MyException();
        throw ex;
    }
    public static class MyException extends Exception {
        public MyException() {
            super("This is a default exception.\n");
        }
        public MyException(String msg) {
            super(msg);
        }
    }
}
