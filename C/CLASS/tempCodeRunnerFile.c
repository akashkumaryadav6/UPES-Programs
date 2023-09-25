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

  for (int i = 0; i <= nodes; i++)
  {
    temp->next = (struct node *)malloc(sizeof(Size));
    temp = temp->next;
    printf("\nEnter data for node %d: ", i + 1);
    scanf("%d", &(temp->data));
    temp->next = NULL;
  }
  temp = head;
  while (temp->next != NULL)
  {
    printf("The data at node %d is: %d", count+1, temp->data);
    count++;
    temp = temp->next;
  }
  printf("\nTotal no of nodes: %d", count);

  printf("\nDeleting the first Node");
  temp = head;
  head = head->next;
  free(temp);

  printf("\nDeleting from the End");
  temp = head;
  while (temp->next->next != NULL)
  {
    a = temp->next;
    temp->next = NULL;
    free(a);
  }
}