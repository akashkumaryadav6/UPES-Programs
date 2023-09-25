#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    } *head, *p;

    int new_count = 0;
    int count = 0;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=50;
    p = head;

    for (int i = 0; i < 9; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        p->data = 56 + i;
        p->next = NULL;
    }
    p = head;
    while (p != NULL)
    {
        printf("The data of Node %d is: %d\n", count+1, p->data);
        count++;
        p = p->next;
    }
    printf("Total nodes including head: %d\n",count);
    int nodes;
    printf("How many nodes you wish to insert? ");
    scanf("%d",&nodes);

    while(nodes>0){
        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d",&(new_node->data));
        new_node->next=head;
        head=new_node;
        printf("New Node added\n");
        nodes--;
    }

    p = head;
    while (p != NULL)
    {
        printf("The data of Node %d is: %d\n", new_count+1, p->data);
        new_count++;
        p = p->next;
    }
    printf("Total nodes including head: %d\n",new_count);

    return 0;
}