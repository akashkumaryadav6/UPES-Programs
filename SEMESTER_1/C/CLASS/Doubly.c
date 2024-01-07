#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct NODE
    {
        int data;
        struct NODE *prev;
        struct NODE *next;
    } size, *head, *temp;

    int nodes, choice, pos;

    head = (struct NODE *)malloc(sizeof(size));
    printf("Enter data for Head Node: ");
    scanf("%d", &(head->data));
    head->next = NULL;
    head->prev = NULL;
    temp = head;

label:
    printf("\nDOUBLY LINKED LIST");
    printf("\n\n1. Insert At Head\n2. Insert At End\n3. Insert At Location\n4. Delete from Head\n5. Delete from End\n6. Delete from Location\n7. Print Linked List\n8. Count Nodes\n9. Exit");
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
            struct NODE *new_node = (struct NODE *)malloc(sizeof(size));
            printf("Enter data for node %d: ", i + 1);
            scanf("%d", &(new_node->data));
            new_node->next = head;
            new_node->prev = NULL;
            if (head != NULL)
            {
                head->prev = new_node;
            }
            head = new_node;
        }
        break;

    case 2:
        system("cls");
        printf("\nYou chose 'INSERT AT END!'");
        temp = head;
        printf("\nHow many nodes do you want to insert? ");
        scanf("%d", &nodes);
        for (int i = 0; i < nodes; i++)
        {
            struct NODE *new_node = (struct NODE *)malloc(sizeof(size));
            printf("Enter data for node %d: ", i + 1);
            scanf("%d", &(new_node->data));
            new_node->next = NULL;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
        }
        break;

    case 3:
        system("cls");
        printf("\nYou chose 'INSERT AT AFTER A LOCATION!'");
        printf("\nEnter position to insert nodes: ");
        scanf("%d", &pos);
        temp = head;
        printf("How many nodes do you want to insert? ");
        scanf("%d", &nodes);
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        for (int i = 0; i < nodes; i++)
        {
            struct NODE *new_node = (struct NODE *)malloc(sizeof(size));
            printf("Enter data for node %d: ", i + 1);
            scanf("%d", &(new_node->data));
            new_node->next = temp->next;
            temp->next = new_node;
            new_node->prev = temp;
            if (new_node->next != NULL)
            {
                new_node->next->prev = new_node;
            }
        }
        break;

    case 4:
        system("cls");
        printf("\nYou chose 'DELETE AT HEAD!'");
        struct NODE *del_head = (struct NODE *)malloc(sizeof(size));
        printf("\nDeleted %d at Head!", head->data);
        del_head = head;
        head = head->next;
        free(del_head);
        break;

    case 5:
        system("cls");
        printf("\nYou chose 'DELETE FROM END!'");
        temp = head;
        struct NODE *del_end = (struct NODE *)malloc(sizeof(size));
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("\nDeleted %d at End!", temp->data);
        del_end = temp;
        temp->prev->next = NULL;
        temp->prev = NULL;
        free(del_end);
        break;

    case 6:
        system("cls");
        printf("\nYou chose 'DELETE FROM LOCATION!'");
        printf("\nEnter the position to delete from: ");
        scanf("%d", &pos);
        temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        struct NODE *del_loc = (struct NODE *)malloc(sizeof(size));
        del_loc = temp;
        printf("\nDeleted %d from %dth node", temp->data, pos);
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(del_loc);
        break;

    case 7:
        system("cls");
        printf("\nYou chose 'PRINT LINKED LIST'");
        temp = head;
        printf("\nLINKED LIST: ");
        if (head->next==NULL){
            printf("%d ->", head->data);
        }
        else{
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        }
        printf("NULL");
        break;

    case 8:
        system("cls");
        printf("\nYou chose 'COUNT NODES'");
        temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        printf("\nNumber of Nodes: %d", count);
        break;

    case 9:
        system("cls");
        printf("\nYou chose 'EXIT'");
        exit(0);
        break;

    default:
        printf("\nInvalid choice!");
        goto label;
    }
    goto label;
    return 0;
}
