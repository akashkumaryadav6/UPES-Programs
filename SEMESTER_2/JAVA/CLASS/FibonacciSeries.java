public class FibonacciSeries {
    public static void main(String[] args) {
        int first = 0;
        int second = 1;
        int range = 10;
		System.out.println("\nName: AKASH KUMAR YADAV\nSAP ID: 500124804\nRoll No.: R271223114\n");

        System.out.println("Fibonacci Series up to " + range + " numbers:");

        for (int i = 0; i < range; i++) {
            System.out.print(first+" ");
            int temp = first + second;
            first = second;
            second = temp;
        }
		System.out.print("\n");
    }
}











