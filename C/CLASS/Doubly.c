#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    struct NODE{
        int data;
        struct NODE* prev;
        struct NODE* next;
    } size, *head, *tail, *temp;

    int nodes;

    head = (struct NODE*)malloc(sizeof(size));
    head->data = 56;
    head->next = NULL;
    head->prev = NULL;
    tail = head;

    printf("Head Node created!\nhead->data:%d\nhead->prev:%d\nhead->next:%d",head->data,head->prev,head->next);

    printf("\n1. Insert At Head\n 2. Insert At End\n 3. Insert At Location");

    printf("\nEnter the no. of nodes you want add: ");
    scanf("%d",&nodes);

    return 0;
}
