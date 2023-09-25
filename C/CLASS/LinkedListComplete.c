#include <stdio.h>
#include <stdlib.h>

int main()
{

    int count = 0, choice, nodes;

    struct Node
    {
        int data;
        struct Node *next;
    } *head, *temp, *p, Node;

    head = (struct Node *)malloc(sizeof(Node));
    printf("\nEnter the data for Head node: ");
    scanf("%d", &(head->data));
    head->next = NULL;
    printf("Head node created!");

label:
    printf("\n\nSelect an operation\n1. Insert Node at Head\n2. Insert Node at the End\n3. Insert Node at a Location\n4. Delete from Head\n5. Delete from End\n6. Delete from location\n7. Print all the nodes\n8. Count nodes");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            temp = head;
            temp->next = (struct Node*)malloc(sizeof(Node));
            temp = temp->next;
            printf("Enter the data for head node: ");
            scanf("%d",&(temp->data));
            temp->next = NULL;
            printf("Node at Head created!");
            break;
            
        case 2:
            struct Node* new_node = (struct Node*)malloc(sizeof(Node));
            printf("Enter data for new node: ");
            scanf("%d",&(new_node->data));
            temp = head;
            new_node->next = NULL;
            if (head == NULL) {
                head= new_node;
            }
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
            printf("Node at End created!");
            break;
            
        case 7:
            temp = head;
            while(temp != NULL){
                printf("\nData at node %d is: %d",count+1,temp->data);
                count++;
            }
            
        case 8:
            temp = head;
            while(temp != NULL){
                count++;
            }
            printf("Total no. of nodes: %d", count);
            

        default:
            printf("No such operation allowed!");
    }
    goto label;
    return 0;
}