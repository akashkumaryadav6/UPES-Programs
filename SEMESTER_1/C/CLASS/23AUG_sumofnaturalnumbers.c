//Calculating sum of first n natural numbers
#include <stdio.h>

int main(){
    int num;
    int sum=0;
    printf("Enter the number of terms (n): ");
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is: %d",num,sum);
    return 0;
}