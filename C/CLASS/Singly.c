#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
  system("cls");
  struct node
  {
    int data;
    struct node *next;
  } Size, *head, *temp, *a;

  int nodes, pos, choice;

  head = (struct node *)malloc(sizeof(Size));
  printf("\nEnter data for Head node: ");
  scanf("%d", &(head->data));
  head->next = NULL;
  printf("HEAD node created!");
  temp = head;

label:
  printf("\n\n1. INSERT AT HEAD");
  printf("\n2. APPEND");
  printf("\n3. INSERT AT LOCATION");
  printf("\n4. DELETE FROM HEAD");
  printf("\n5. DELETE FROM LOCATION");
  printf("\n6. DELETE FROM END");
  printf("\n7. PRINT LINKED LIST");
  printf("\n8. COUNT");
  printf("\n9. EXIT");
  printf("\nWhat is your choice? ");

  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    system("cls");
    printf("\nYou chose 'INSERT AT HEAD!'");
    printf("\nHow many nodes do you want to add? ");
    scanf("%d", &nodes);
    printf("\n");
    for (int i = 0; i < nodes; i++)
    {
      struct node *new_node = (struct node *)malloc(sizeof(Size));
      printf("Enter data for node %d: ", i + 1);
      scanf("%d", &(new_node->data));
      new_node->next = head;
      head = new_node;
    }
    break;

  case 2:
    system("cls");
    printf("\nYou chose 'ADD AT END!'");
    printf("\nHow many nodes do you want to append? ");
    scanf("%d", &nodes);
    temp = head;
    for (int i = 0; i < nodes; i++)
    {
      struct node *new_node = (struct node *)malloc(sizeof(Size));
      printf("Enter data for node %d: ", i + 1);
      scanf("%d", &(new_node->data));
      new_node->next = NULL;
      if (head == NULL)
      {
        head = new_node;
        return;
      }
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = new_node;
    }
    break;

  case 3:
    system("cls");
    printf("\nYou chose 'INSERT AT LOCATION!'");
    printf("\nEnter position to insert nodes: ");
    scanf("%d", &pos);
    temp = head;
    printf("How many nodes do you want to insert? ");
    scanf("%d", &nodes);
    if (pos == 1)
    {
      for (int i = 0; i < nodes; i++)
      {
        temp->next = (struct node *)malloc(sizeof(Size));
        temp = temp->next;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
      }
    }
    else
    {
      for (int i = 1; i < pos - 1; i++)
      {
        temp = temp->next;
      }
      for (int i = 0; i < nodes; i++)
      {
        struct node *new_node = (struct node *)malloc(sizeof(Size));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &(new_node->data));
        new_node = temp->next;
        temp->next = new_node;
      }
    }
    break;

  case 4:
    system("cls");
    printf("\nYou chose 'DELETE FROM HEAD!'");
    temp = head;
    head = head->next;
    printf("\n\nDeleted %d from Head", temp->data);
    free(temp);
    break;

  case 6:
    system("cls");
    printf("\nYou chose 'DELETE FROM END!'");
    temp = head;
    struct node *del = (struct node *)malloc(sizeof(Size));
    while (temp->next)
    {
      del = temp;
      temp = temp->next;
    }
    del->next = NULL;
    free(del);
    break;

  case 5:
    system("cls");
    printf("\nYou chose 'DELETE FROM LOCATION!'");
    printf("\nEnter position to delete node: ");
    scanf("%d", &pos);
    temp = head;
    if (pos == 1)
    {
      temp = head;
      head = head->next;
      printf("\n\nDeleted %d from Linked list!", temp->data);
      free(temp);
    }
    else
    {
      for (int i = 1; i < pos - 1; i++)
      {
        temp = temp->next;
      }
      struct node *del = temp->next;
      temp->next = temp->next->next;
      printf("\nDeleted %d from Linked List!\n", del->data);
      del->next = NULL;
      free(del);
    }
    break;

  case 7:
    system("cls");
    printf("\nYou chose 'PRINT LINKED LIST!'\n");
    temp = head;
    int index = 0;
    while (temp != NULL)
    {
      index++;
      printf("%d -> ", temp->data);
      temp = temp->next;
    }
    break;

  case 8:
    system("cls");
    printf("\nYou chose 'COUNT NODES!'");
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
    printf("\nTotal no of nodes: %d", count);
    break;

  case 9:
    system("cls");
    printf("\nYou chose 'EXIT'");
    exit(0);
    break;

  default:
    system("cls");
    printf("\nNo such operation allowed");
  }
  goto label;
}