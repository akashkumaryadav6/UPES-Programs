#include<stdio.h>
#include<conio.h>

void CALCULATE(int f,int s){
    int result=f+s;
    printf("%d",result);
}
int CALCULATE_(int f,int s){
    int result=f+s;
    return result;
}
int CALCULATE__(){
    int f=5, s=8;  
    int result=f+s;
    return result;
}
void CALCULATE___(){
    int f=5, s=8;  
    int result=f+s;
    printf("%d",result);
}

int main(){
    printf("\nResult: ");
    CALCULATE(45,5);
    printf("\nResult: ",CALCULATE_(45,5));
    printf("\nResult: ",CALCULATE__());
    printf("\nResult: ");
    CALCULATE___();
    return 0;
}