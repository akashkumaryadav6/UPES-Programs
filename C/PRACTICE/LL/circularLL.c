#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *temp, *new, *last;

void traverse()
{
    if (head != NULL)
    {
        do
        {
            printf("%d->", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
}

int count_nodes()
{
    int count = 0;
    if (head != NULL)
    {
        do
        {
            count++;
            printf("%d->", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    return count;
}

int main()
{
    int choice, ele;
    int count = 0;
    do
    {
        printf("\nCircular Linked List\n1. Create Head\n");
        printf("2. Insert at Head\n");
        printf("3. Append a Node\n");
        printf("8. Count Nodes\n");
        printf("9. Exit\n");
        printf("What is your choice? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nCreate Head\n");
            if (head == NULL)
            {
                head = (struct node *)malloc(sizeof(struct node));
                printf("Insert data for the head node: ");
                scanf("%d", &ele);
                head->data = ele;
                head->next = head;
                printf("Head created!\n");
            }
            else
            {
                printf("\nHead already exists. Try option 2");
            }
            last = head;
            temp = head;
            break;

        case 2:
            printf("\nInsert at Head\n");
            new = (struct node *)malloc(sizeof(struct node));
            printf("Insert data for new Head: ");
            scanf("%d", &ele);
            new->data = ele;
            new->next = head;

            // If linked list is not NULL then
            // set the next of last node
            if (head!= NULL)
            {

                // Find the node before head and
                // update next of it.
                temp = head;
                while (temp->next != head)
                    temp = temp->next;
                temp->next = new;
            }
            else{
                // For the first node
                new->next = new;
            }
            head = new;
            break;

        case 3:
            printf("\nAppending a node");
            new = (struct node *)malloc(sizeof(struct node));
            printf("\nInsert data for new node: ");
            scanf("%d", &ele);
            new->data = ele;
            if (head == NULL)
            {
                head = new;
                new->next = head;
                printf("Head created!\n");
            }
            else
            {
                temp = head;
                traverse();
                last = temp;
                new->next = last->next;
                last->next = new;
                printf("Appended!\n");
            }
            break;

        case 8:
            temp = head->next;
            count = count_nodes();
            printf("%d\nNumber of nodes: %d\n", head->data, count);
            break;

        case 9:
            exit(0);

        default:
            printf("\nWrong Choice!");
        }
    } while (1);

    return 0;
}
