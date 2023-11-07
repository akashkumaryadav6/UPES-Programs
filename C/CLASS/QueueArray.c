#include<stdio.h>
#include<stdlib.h>
#define size 10

int queue[size];
int front = -1, rear = -1;

void push(){
    if (rear == size-1){
        printf("\nQueue is Full!");
    }
    else{
        front=0;
        int ele;
        printf("\nEnter the element: ");
        scanf("%d", &ele);
        rear++;
        queue[rear]=ele;
        printf("\nPushed Element: %d", queue[rear]);
    }
    printf("\n----------------------");
}

void pop(){
    if (front == rear){
        printf("\nQueue is Empty!");
    }
    else{
        printf("\nPopped Element: %d", queue[front]);
        front++;
        if (front == rear){
            front, rear = 0;
        }
    }
    printf("\n----------------------");
}

void display(){
    if (front == rear){
        printf("\nQueue is Empty!");
    }
    else{
        printf("\n");
        for (int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
        }
    }
    printf("\n----------------------");
}

void peek(){
    printf("\nThe first element is: %d", queue[front]);
    printf("\n----------------------");
}

int main()
{
label:
    printf("\n\nCreate Queue using Array:");
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
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

    case 4:
        printf("\n***DISPLAY***");
        display();
        break;

    case 3:
        printf("\n***PEEK***");
        peek();
        break;

    case 5:
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