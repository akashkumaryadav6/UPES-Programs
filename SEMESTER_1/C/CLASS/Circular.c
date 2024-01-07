#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Circular
    {
        int data;
        struct Circular *next;
    } size, *temp, *head;

    int nodes, choice, pos;

    head = (struct Circular *)malloc(sizeof(size));
    head->data = 56;
    head->next = NULL;
    temp = head;

label:
    printf("\n\n1. Insert At Head\n2. Insert At End\n3. Insert At Location\n4. Delete from Head\n5. Delete from End\n6. Delete from Location\n7. Print Linked List\n8. Exit");
    printf("\nWhat is your choice? ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        system("cls");
        printf("\nYou chose 'INSERT AT HEAD'");
        printf("\nHow many nodes do you want to create? ");
        scanf("%d", &nodes);
        for (int i = 0; i < nodes; i++)
        {
            struct Circular *new_node = (struct Circular *)malloc(sizeof(size));
            printf("Enter data for %d Node: ", i);
            scanf("%d", &(new_node->data));
            new_node->next = head->next;
            head->next = new_node;
        }
        break;

    case 2:
        system("cls");
        printf("\nYou chose 'INSERT AT END'");
        printf("\nHow many nodes do you want to create? ");
        scanf("%d", &nodes);
        temp = head;
        while (temp != head)
        {
            temp = temp->next;
        }

        for (int i = 0; i < nodes; i++)
        {
            struct Circular *new_node = (struct Circular *)malloc(sizeof(size));
            printf("Enter data for %d Node: ", i);
            scanf("%d", &(new_node->data));
            new_node->next = temp->next;
            temp->next = new_node;
            temp = new_node;
        }
        break;

    case 7:
        printf("\nYou chose 'PRINT LINKED LIST'\n");
        temp = head;
        if (head != NULL)
            do
            {
                printf("%d-> ", temp->data);
                temp = temp->next;
            } while (temp != head);
        break;

    case 8:
        printf("\nYou chose 'COUNT NODES'\n");
        temp = head;
        int count = 0;
        if (head != NULL)
            do
            {
                count++;
                temp = temp->next;
            } while (temp != head);
        break;

    case 9:
        printf("You chose 'EXIT'");
        exit(0);
        break;

    default:
        printf("\nInvalid Choice");
    }
    goto label;
    return 0;
}
