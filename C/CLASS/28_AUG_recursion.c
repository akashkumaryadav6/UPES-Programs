#include<stdio.h>

int sum(int m){
    if (m!=0){
        return m+sum(m-1);}
    else{
        return m;}
} 

int Fact(unsigned m){
    if (m<=1)
        return 1;
    return m*Fact(m-1);
}

int fibonacci(int m){
    if (m==0)
        return 0;
    if (m==1)
        return 1;
    return fibonacci(m-1)+fibonacci(m-2);
}

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("The sum of %d natural numbers is %d",num,sum(num));
    printf("\nThe factorial of %d is %d",num,Fact(num));
    printf("\nThe fibonacci of %d is %d",num,fibonacci(num));
    return 0;
}