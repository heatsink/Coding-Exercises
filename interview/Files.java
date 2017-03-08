import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class Files {
    public static void main(String[] args) throws IOException {
        File file = new File("input.txt");
        FileWriter fileWriter = new FileWriter(file);
        fileWriter.write("dog\n");
        fileWriter.write("doge\n");
        fileWriter.write("kabob\n");
        fileWriter.flush();
        Scanner scan = new Scanner(file);
        while (scan.hasNextLine()) {
            System.out.println(scan.nextLine());
        }
    }
}
