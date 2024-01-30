import java.util.Scanner;

public class CustomerInfo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter customer name: ");
        String name = scanner.nextLine();

        System.out.print("Enter customer ID: ");
        int cid = scanner.nextInt();

        System.out.print("Enter customer age: ");
        int age = scanner.nextInt();
		
        scanner.nextLine();

        System.out.print("Enter customer gender: ");
        String gender = scanner.nextLine();

        System.out.println("\nCustomer Information:");
        System.out.println("Name: " + name);
        System.out.println("Customer ID: " + cid);
        System.out.println("Age: " + age);
        System.out.println("Gender: " + gender);

        scanner.close();
    }
}
