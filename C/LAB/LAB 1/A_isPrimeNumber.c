//Write a C program to check whether the given number is prime or not.

#include<stdio.h>
void isPrimeNumber(int x);
int main(){
    int num;
    printf("What is your number? ");
    scanf("%d", &num);
    isPrimeNumber(num);
    return 0;
}

void isPrimeNumber(int x){
    int factors = 0;
    for (int i = 1 ; i < x; i++ ){
            if (x%i==0){
                factors++;
            }
            else{
                continue;
            }
        }
    if (factors<2){
        printf("It is a Prime number!");
    }
    else{
        printf("It is not a Prime number!");
    }
}