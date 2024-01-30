public class Pyramid {
    public static void main(String[] args) {
		System.out.println("\nName: AKASH KUMAR YADAV\nSAP ID: 500124804\nRoll No.: R271223114\n");
		System.out.println("Pattern\n");
        int rows = 10;

        for(int i=2;i<rows;i++){
			for(int j=rows;j>0;j--){
				if(i>j){
					System.out.print("* ");
				}
				else{
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}