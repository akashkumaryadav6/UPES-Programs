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

int peek()
{
    if (top == NULL)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nTop Element: %d", top->data);
    }
    printf("\n----------------------");
}

void getStackSize(struct node *head)
{
    int length = 0;
    if (head == NULL)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        while (head != NULL)
        {
            head = head->next;
            length++;
        }
    }
    if (length < 2){
        printf("\n%d Elements", length);
    }
    else{
        printf("\n%d Elements", length);
    }
    printf("\n----------------------");
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
    printf("\nPushed Element: %d", temp->data);
    printf("\n----------------------");
}

void pop()
{
    struct node *temp;
    if (isEmpty(top))
    {
        printf("\nStack Underflow!");
        return;
    }
    else
    {
        temp = top;
        top = top->next;
        printf("\nPopped  Element : %d", temp->data);
        free(temp);
    }
    printf("\n----------------------");
}

void display(struct node *nodePtr)
{
    if (top == NULL){
        printf("\nStack Underflow!");
    }
    else{
        while (nodePtr != NULL)
        {
            printf("\n");
            printf("%d", nodePtr->data);
            nodePtr = nodePtr->next;
            if (nodePtr != NULL)
                printf(" ");
        }
    }
    printf("\n----------------------");
}

void count(struct node *nodePtr)
{
    int count = 0;
    if (top == NULL){
        printf("\n0 Element");
    }
    else{
        while (nodePtr != NULL){
            count++;
            nodePtr = nodePtr->next;
            if (count == 1){
                printf("\n%d Element", count);
            }
            else{
                printf("\n%d Elements", count);
            }
        }
    }
    printf("\n----------------------");
}

int main()
{
    initialize();
    int choice, ele, n;
label:
    printf("\n\nCreate Stack using Linked List");
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Count\n6. Exit");
    printf("\nEnter your choice? ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n***PUSH AN ELEMENT***");
        printf("\nEnter the element: ");
        scanf("%d", &ele);
        push(ele);
        break;

    case 2:
        printf("\n***POP AN ELEMENT***");
        pop();
        break;

    case 3:
        printf("\n***PEEK***");
        peek();
        break;

    case 4:
        printf("\n***DISPLAY***");
        display(top);
        break;

    case 5:
        printf("\n***COUNT***");
        count(top);
        break;

    case 6:
        printf("\n***EXIT***");
        exit(0);
        break;

    default:
        printf("\nError: Invalid Choice!");
    }
    goto label;

    return 0;
}