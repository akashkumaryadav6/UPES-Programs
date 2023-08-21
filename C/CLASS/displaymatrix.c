#include <stdio.h>
int main() {
    int num=1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}