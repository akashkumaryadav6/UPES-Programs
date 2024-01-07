#include <stdio.h>
#include <stdlib.h>
#define size 10

int stack[size];
int top = -1;

void push()
{
    if (top == size - 1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        int ele;
        printf("\nEnter the element: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
        printf("\nPushed Element: %d", ele);
    }
    printf("\n----------------------");
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nPopped Element: %d", stack[top]);
        top--;
    }
    printf("\n----------------------");
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nTop Element: %d", stack[top]);
    }
    printf("\n----------------------");
}

void count(){
    if (top < 1){
        printf("\n%d Elements", top+1);
    }
    else{
        printf("\n%d Elements", top+1);
    }
    printf("\n----------------------");
}

void display(){
    if (top == -1){
        printf("\nStack Underflow!");
    }
    else{
        printf("\n");        
        for (int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
    }
    printf("\n----------------------");
}

int main()
{
label:
    printf("\n\nCreate Stack using Array:");
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Count\n5. Display\n6. Exit\n");
    printf("\nWhat is your choice? ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n***PUSH AN ELEMENT***");
        push();
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
        printf("\n***COUNT***");
        count();
        break;

    case 5:
        printf("\n***DISPLAY***");
        display();
        break;

    case 6:
        printf("***EXIT***");
        printf("\n----------------------");
        exit(0);
        break;

    default:
        printf("Error: Invalid Choice!");
        printf("\n----------------------");
    }
    goto label;
    return 0;
}