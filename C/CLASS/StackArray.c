#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Error: Stack Overflow!\n");
        return;
    }
    printf("Pushed Element: %d\n", value);
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Error: Stack Underflow!\n");
        return -1;
    }
    printf("Popped Element: %d\n", stack[top]);
    top--;
    return stack[top];
}

void peek()
{
    printf("Top Element: %d\n", stack[top]);
}

void display()
{
    int i = 0;
    if (top == -1)
    {
        printf("Error: Stack Underflow!");
    }
    else
    {
        while (stack[i] != '\0')
        {
            printf("%d ", stack[i]);
            i++;
        }
    }
}

int main()
{

    int choice, ele, n;
label:
    printf("\nCreate Stack using Array\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice? ");
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
        display();
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
