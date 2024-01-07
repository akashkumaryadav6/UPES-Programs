#include <stdio.h>
#include <stdlib.h>

int main(){
    struct sec{
        int data;
        struct sec* next;
        struct sec* prev;
    }size, *head, *temp;

    head = (struct sec*)malloc(sizeof(size))