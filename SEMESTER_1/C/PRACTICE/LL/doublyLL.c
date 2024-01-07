#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head, *temp, *new, *del_head;

void traverse()
{
    if (head == NULL)
    {
        printf("Empty List!\n");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
}

void display()
{
    if (head == NULL)
    {
        printf("Empty List!\n");
    }
    else
    {
        temp = head;
        printf("The list is: NULL <-> ");
        while (temp != NULL)
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int length()
{
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    int choice, pos, count;
label:
    printf("\nDOUBLY LINKED LIST\n");
    printf("1. Create Head\n");
    printf("2. Insert Node at head\n");
    printf("3. Append Node\n");
    printf("4. Insert Node\n");
    printf("5. Display List\n");
    printf("6. Delete from Head\n");
    printf("7. Delete last node\n");
    printf("8. Delete from a location\n");
    printf("9. Exit\nMake a choice! ");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for Head: ");
        scanf("%d", &head->data);
        head->prev = NULL;
        head->next = NULL;
        printf("Head created!\n");
        break;

    case 2:
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &new->data);
        new->prev = NULL;
        new->next = head;
        if (head != NULL)
        {
            head->prev = new;
        }
        head = new;
        printf("New Head created!\n");
        break;

    case 3:
        if (head == NULL)
        {
            printf("Create head first!\n");
        }
        else
        {
            new = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for new node: ");
            scanf("%d", &new->data);
            new->next = NULL;
            traverse();
            temp->next = new;
            new->prev = temp;
            printf("Node %d at End inserted!\n", new->data);
        }
        break;

    case 4:
        printf("Enter position for node: ");
        scanf("%d", &pos);
        ;
        count = length();
        if (pos > count + 1 || pos < 0)
        {
            printf("Invalid Position.\n");
        }
        else if (pos == 1)
        {
            new = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for new node: ");
            scanf("%d", &new->data);
            new->prev = NULL;
            new->next = head;
            if (head != NULL)
            {
                head->prev = new;
            }
            head = new;
            temp = head;
            printf("Node %d at position %d inserted\n", new->data, pos);
        }
        else
        {
            temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                if (temp == NULL)
                {
                    printf("Invalid Position.\n");
                    return 1;
                }
                temp = temp->next;
            }

            new = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for new node: ");
            scanf("%d", &new->data);
            new->prev = temp->prev;
            new->next = temp;
            if (temp->prev != NULL)
            {
                temp->prev->next = new;
            }
            temp->prev = new;
            printf("Node %d at position %d inserted\n", new->data, pos);
        }
        break;

    case 5:
        display();
        break;

    case 6:
        del_head = head;
        head = head->next;
        head->prev = NULL;
        printf("Node %d deleted from Head\n", del_head->data);
        free(del_head);
        break;

    case 7:
        traverse();
        struct node *del_last = temp;
        temp->prev->next = NULL;
        printf("Node %d deleted from the End\n", del_last->data);
        free(del_last);
        break;

    case 8:
        printf("Enter position for node: ");
        scanf("%d", &pos);
        count = length();
        if (pos > count + 1 || pos < 0)
        {
            printf("Invalid Position.\n");
        }
        else if (pos == 1)
        {
            struct node *del_loc;
            del_loc = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }
            printf("Node %d deleted from Head\n", del_loc->data);
            free(del_loc);
        }
        else
        {
            struct node *del_loc;
            temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                printf("Invalid Position\n");
                return 1;
            }
            else
            {
                del_loc = temp;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                printf("Node %d deleted from position %d\n", del_loc->data, pos);
                free(del_loc);
            }
        }
        break;

    case 9:
        printf("Exit\n");
        temp = head;
        while (temp != NULL)
        {
            struct node *next_node = temp->next;
            free(temp);
            temp = next_node;
        }
        free(head);
        free(new);
        exit(0);
        break;

    default:
        printf("Invalid Choice!\n");
    }
    goto label;
    return 0;
}
