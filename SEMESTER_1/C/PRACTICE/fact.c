#include <stdio.h>

unsigned long int factN(int N);

int main(){
    printf("%d", factN(17));
    return 0;
}

unsigned long int factN(int N){
    if (N==0 || N==1){
        return 1;
    }
    return N * factN(N-1);
}