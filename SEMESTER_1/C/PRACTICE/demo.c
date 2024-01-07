#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a[] = {1,2,3,4,5};
    printf("%d%d%d%d%d", *a, *(a+0), *(0+a), a[0]);
    return 0;
}