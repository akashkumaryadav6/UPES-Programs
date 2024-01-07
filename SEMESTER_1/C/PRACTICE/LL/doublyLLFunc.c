#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head;

void traverse(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty List!\n");
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty List!\n");
        return;
    }

    struct node *temp = head;
    printf("The list is: NULL <-> ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int length(struct node *head)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void create_head(struct node **head)
{
    *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for Head: ");
    scanf("%d", &(*head)->data);
    (*head)->prev = NULL;
    (*head)->next = NULL;
    printf("Head created!\n");
}

void insert_at_head(struct node **head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &new->data);
    new->prev = NULL;
    new->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    *head = new;
    printf("New Head created!\n");
}

void append(struct node **head)
{
    if (*head == NULL)
    {
        printf("Create head first!\n");
    }
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &new->data);
        new->next = NULL;
        traverse(*head);
        (*head)->next = new;
        new->prev = *head;
        printf("Node %d at End inserted!\n", new->data);
    }
}

void insert_at_loc(struct node **head, int pos)
{
    int count = length(*head);
    if (pos > count + 1 || pos < 0)
    {
        printf("Invalid Position.\n");
    }
    else if (pos == 1)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &new->data);
        new->prev = NULL;
        new->next = *head;
        if (*head != NULL)
        {
            (*head)->prev = new;
        }
        *head = new;
        printf("Node %d at position %d inserted\n", new->data, pos);
    }
    else
    {
        struct node *temp = *head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                printf("Invalid Position.\n");
                return;
            }
            temp = temp->next;
        }

        struct node *new = (struct node *)malloc(sizeof(struct node));
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
}

void delete_from_head(struct node **head)
{
    if (*head == NULL)
    {
        printf("Empty List!\n");
        return;
    }

    struct node *del_head = *head;
    *head = (*head)->next;
    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }
    printf("Node %d deleted from Head\n", del_head->data);
    free(del_head);
}

void delete_from_end(struct node **head)
{
    if (*head == NULL)
    {
        printf("Empty List!\n");
        return;
    }

    traverse(*head);
    struct node *del_last = *head;
    while (del_last->next != NULL)
    {
        del_last = del_last->next;
    }

    if (del_last->prev != NULL)
    {
        del_last->prev->next = NULL;
    }
    else
    {
        *head = NULL; // The list becomes empty after deletion
    }

    printf("Node %d deleted from End\n", del_last->data);
    free(del_last);
}

void delete_from_loc(struct node **head, int pos)
{
    int count = length(*head);
    if (pos > count || pos < 1)
    {
        printf("Invalid Position.\n");
    }
    else if (pos == 1)
    {
        struct node *del_loc = *head;
        *head = (*head)->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        printf("Node %d deleted from Head\n", del_loc->data);
        free(del_loc);
    }
    else
    {
        struct node *temp = *head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        struct node *del_loc = temp;
        temp->prev->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        printf("Node %d deleted from position %d\n", del_loc->data, pos);
        free(del_loc);
    }
}

int main()
{
    int choice, pos;
    while (1)
    {
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
            create_head(&head);
            break;

        case 2:
            insert_at_head(&head);
            break;

        case 3:
            append(&head);
            break;

        case 4:
            printf("Enter position for node: ");
            scanf("%d", &pos);
            insert_at_loc(&head, pos);
            break;

        case 5:
            display(head);
            break;

        case 6:
            delete_from_head(&head);
            break;

        case 7:
            delete_from_end(&head);
            break;

        case 8:
            printf("Enter position for node: ");
            scanf("%d", &pos);
            delete_from_loc(&head, pos);
            break;

        case 9:
            printf("Exit\n");
            struct node *temp = head;
            while (temp != NULL)
            {
                struct node *next_node = temp->next;
                free(temp);
                temp = next_node;
            }
            exit(0);

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
