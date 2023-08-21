#include<stdio.h>
#include<conio.h>

int CALCULATE(int f,int s, char sym){
    int result=0;
    if (sym=='A' || sym=='a'){
        result=result+f+s;
    }
    else if (sym=='S' || sym=='s'){
        result=result+f-s;
    }
    else if (sym=='D' || sym=='d'){
        result=result+f/s;
    }
    else if (sym=='M' || sym=='m'){
        result=result+f*s;
    }
    else{
        printf("No such operator allowed!");
    }
    return result;
}

int main(){
    printf("Result: ");
    CALCULATE(45,5,'s');
    return 0;
}