#include<stdio.h>
int main(){
    int i=5, *j, **k;
    j=&i;
    k=&j;
    printf("Address of i: %d",&i);
    printf("\nAddress of j: %d",&j);
    printf("\nValue of i: %d",i);
    printf("\nValue of k: %d",**k);
    
    return 0;
}