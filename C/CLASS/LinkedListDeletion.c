#include <stdio.h>
#include <stdlib.h>

int main()
{
  struct node
  {
    int data;
    struct node *next;
  } Size, *head, *temp, *a;
  
  int nodes, count = 0;

  head = (struct node *)malloc(sizeof(Size));
  printf("\nEnter data for head: ");
  scanf("%d", &(head->data));
  printf("\nHead node created");

  temp = head;

  printf("\nEnter the no of nodes: ");
  scanf("%d", &nodes);
  printf("\n");

  for (int i = 0; i < nodes; i++)
  {
    temp->next = (struct node *)malloc(sizeof(Size));
    temp = temp->next;
    printf("Enter data for node %d: ", i + 1);
    scanf("%d", &(temp->data));
    temp->next = NULL;
  }
  temp = head;
  while (temp != NULL)
  {
      count++;
      printf("\nThe data at node %d is: %d", count, temp->data);
      temp = temp->next;
  }
  printf("\nTotal no of nodes: %d", count);

  printf("\n\nDELETING FROM HEAD");
  temp = head;
  head = head->next;
  free(temp);
  
  count = 0;
  temp = head;
  while (temp != NULL)
  {
      count++;
      printf("\nThe data at node %d is: %d", count, temp->data);
      temp = temp->next;
  }
  printf("\nTotal no of nodes: %d", count);

  printf("\n\nDELETING FROM THE END");
  temp = head;
  if (temp->next->next == NULL)
  {
    a = temp->next;
    temp->next = NULL;
    free(a);
  }
  
  count = 0;
  temp = head;
  while (temp != NULL)
  {
      count++;
      printf("\nThe data at node %d is: %d", count, temp->data);
      temp = temp->next;
  }
  printf("\nTotal no of nodes: %d", count);
}