#include<stdio.h>
#include<conio.h>

int CALCULATE(int f,int s, char sym){
    int result=0;
    if (sym=='A' || sym=='a' || sym=='+'){
        result=result+f+s;
    }
    else if (sym=='S' || sym=='s' || sym=='-'){
        result=result+f-s;
    }
    else if (sym=='D' || sym=='d' || sym=='/'){
        result=result+f/s;
    }
    else if (sym=='M' || sym=='m' || sym=='*'){
        result=result+f*s;
    }
    else if (sym=='U' || sym=='u' || sym=='%'){
        result=result+f*s;
    }
    else{
        return printf("No such operator allowed!");
    }
    return result;
}

int main(){
    printf("Result: ");
    CALCULATE(45,5,']');
    return 0;
}