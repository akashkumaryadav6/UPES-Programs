//Calculate factorial of a number
#include<stdio.h>
int fact();

int main(){
    
    int res=fact();
    printf("%d",res);    
    return 0;
}

int fact(){
    int num;
    printf("Enter any number to calculate its factorial: ");
    scanf("%d",&num);
    int fact=num;
    for (int i=0; i<=num; i++){
        fact=fact*(num-1);
        num=num-1;
    }
    return fact;
}