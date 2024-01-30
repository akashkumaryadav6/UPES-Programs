import java.util.Scanner;

public class SimpleInterest{
    public static void main(String[] args) {
        System.out.println("\nName: AKASH KUMAR YADAV\nSAP ID: 500124804\nRoll No.: R271223114\n");
		System.out.println("Simple Interest for given principal amount, interest, and time.\n");
		Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the principal amount: ");
        double principal = scanner.nextDouble();

        System.out.print("Enter the rate of interest (in percentage): ");
        double rateOfInterest = scanner.nextDouble();

        System.out.print("Enter the time (in years): ");
        double time = scanner.nextDouble();

        double simpleInterest = (principal * rateOfInterest * time) / 100;

        System.out.println("Simple Interest: " + simpleInterest);
        scanner.close();
    }
}
