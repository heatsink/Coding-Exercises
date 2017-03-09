public class Person {
    String name;
    String occupation;
    double height;

    public Person(String name, String occupation, double height) {
        this.name = name;
        this.occupation= occupation;
        this.height= height;
    }

    /*
     * Default Constructor.
     */
    public Person() {
        this.name = "NO_NAME";
        this.occupation= "NO_OCCUPATION";
        this.height = 0.0;
    }

    void printAttributes() {
        System.out.printf("Name: %s\n", name);
        System.out.printf("Occupation: %s\n", occupation);
        System.out.println("Height: " + height);
    }
}
