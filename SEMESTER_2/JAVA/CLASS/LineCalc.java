class LineCalc {
    public static void main(String[] args) {
        System.out.println("\nName: AKASH KUMAR YADAV\nSAP ID: 500124804\nRoll No.: R271223114\n");

        char op = args[0].charAt(0);
        double a = Double.parseDouble(args[1]);
        double b = Double.parseDouble(args[2]);
        double opr;

        switch (op) {
            case 'a':
                opr = a + b;
                System.out.println("Sum is: " + opr);
                break;

            case 's':
                opr = a - b;
                System.out.println("Difference is: " + opr);
                break;

            case 'd':
                if (b != 0) {
                    opr = a / b;
                    System.out.println("Division result is: " + opr);
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                }
                break;

            case 'm':
                opr = a * b;
                System.out.println("Product is: " + opr);
                break;

            default:
                System.out.println("Invalid Operator");
        }
    }
}
