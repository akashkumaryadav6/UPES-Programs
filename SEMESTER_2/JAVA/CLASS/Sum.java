class Sum{
	public static void main(String[] args){
		System.out.println("\nName: AKASH KUMAR YADAV\nSAP ID: 500124804\nRoll No.: R271223114\n");
		System.out.println("Sum of all integers greater than 40 and less than 250 that are divisible by 5:\n");
		int sum = 0;
		for (int i=41; i<250; i++){
			if (i%5==0){
				sum = sum + i;
			}
			else{
				continue;
			}
		}
		System.out.println(sum);
	}
}
