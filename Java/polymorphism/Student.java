public class Student extends Person {
    String major;
    public Student(String name, String occupation, double height, String major) {
        super(name, occupation, height);
        this.major = major;
    }
    void printAttributes() {
        super.printAttributes();
        System.out.println("Major: " + major);
    }
}
