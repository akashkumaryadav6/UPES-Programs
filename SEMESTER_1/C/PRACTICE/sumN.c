#include <stdio.h>

int sumN(int N);

int main(){
    int result = sumN(10);
    printf("%d", result);
    return 0;
}

int sumN(int N){
    if (N==0){
        return 0;
    }
    return N + sumN(N-1);
}