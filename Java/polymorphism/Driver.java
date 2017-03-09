public class Driver {
    public static void main(String[] args) {
        Person defaultP= new Person();
        Person p = new Person("Sean", "Student", 5.5);
        defaultP.printAttributes();
        p.printAttributes();
        Person sean = new Student("Sean", "Student", 5.5, "CPE");
        sean.printAttributes();
    }
}
