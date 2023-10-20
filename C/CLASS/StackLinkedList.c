#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top;

void initialize()
{
    top = NULL;
}

int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top != NULL)
        return 1;
    else
        return 0;
}

int peek()
{
    return top->data;
}

int getStackSize(struct node *head)
{
    int length = 0;
    if (head == NULL)
    {
        printf("Error : Invalid stack pointer !!!\n");
    }
    else
    {
        while (head != NULL)
        {
            head = head->next;
            length++;
        }
    }
    return length;
}

void push(int num)
{
    struct node *temp = (struct node *)malloc(1 * sizeof(struct node));
    temp->data = num;

    if (top == NULL)
    {
        top = temp;
        top->next = NULL;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
    printf("Pushed Element: %d\n", temp->data);
}

void pop()
{
    struct node *temp;
    if (isEmpty(top))
    {
        printf("\nStack is Empty\n");
        return;
    }
    else
    {
        temp = top;
        top = top->next;
        printf("Removed  Element : %d\n", temp->data);
        free(temp);
    }
}

void display(struct node *nodePtr)
{
    while (nodePtr != NULL)
    {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if (nodePtr != NULL)
            printf(" ");
    }
    printf("\n");
}

void main()
{
    initialize();
    int choice, ele, n;
label:
    printf("\nCreate Stack using Linked List\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice? ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("How many elements do you want to push? ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the %d element: ", i + 1);
            scanf("%d", &ele);
            push(ele);
        }
        break;

    case 2:
        pop();
        break;

    case 3:
        peek();
        break;

    case 4:
        display(top);
        break;

    case 5:
        exit(0);
        break;

    default:
        printf("\nError: Invalid Choice!");
    }
    goto label;

    return 0;
}