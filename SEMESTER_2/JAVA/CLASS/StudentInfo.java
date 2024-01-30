import java.util.Scanner;

public class StudentInfo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter student ID: ");
        int sap = scanner.nextInt();

        System.out.print("Enter student age: ");
        int age = scanner.nextInt();
		scanner.nextLine();

        System.out.println("\nStudent Information:");
        System.out.println("Name: " + name);
        System.out.println("Student ID: " + sap);
        System.out.println("Age: " + age);

        scanner.close();
    }
}
