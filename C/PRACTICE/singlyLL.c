#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *root, *temp, *new, *new2, *new3, *del, size;

    root = (struct node *)malloc(sizeof(struct node));
    root->data = 56;
    root->next = NULL;
    printf("Root created!\n");

    new = (struct node *)malloc(sizeof(struct node));
    new->data = 99;
    new->next = NULL;
    root->next = new;
    printf("New created!\n");

    new2 = (struct node *)malloc(sizeof(struct node));
    new2->data = 69;
    new2->next = NULL;
    temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new2;
    printf("New2 created!\n");

    new3 = (struct node *)malloc(sizeof(struct node));
    new3->data = 89;
    new3->next = NULL;
    temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new3;
    printf("New3 created!\n");

    temp = root;   // Reset temp to root
    int count = 0; // Start count from 1
    while (temp != NULL)
    {
        printf("%d$", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nNumber of nodes: %d\n", count);

    int pos = 3;
    temp = root;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    del = (struct node *)malloc(sizeof(size));
    temp->next = temp->next->next;
    printf("\nDeleted %d from Linked List!\n", del->data);
    del->next = NULL;
    free(del);

    free(new);
    free(new2);
    free(new3);
    free(root);

    return 0;
}
