#include<stdio.h>
#include<stdlib.h>

int main(){
    system.cls();

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

    printf("\nEnter the no. of nodes you want add: ");
    scanf("%d",&nodes);

    for (int i = 0; i<nodes; i++){
        struct NODE* new_node = (struct NODE*)malloc(sizeof(size));
        new_node->data = 56+i;
        new_node->prev = tail;
        new_node->next = NULL;
        tail->next = new_node;
        tail = tail->next;
    }

    tail = head;
    for (int i = 0; i<nodes; i++){
        printf("\nNode %d prev: %d", i+1, &(temp->prev));
        printf("\nNode %d data: %d", i+1, &(temp->data));
        printf("\nNode %d next: %d", i+1, &(temp->next));
        printf("\n");
    }

    return 0;
}
