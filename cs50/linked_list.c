#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
} 
node;

int main(int argc, char *argv[])
{
  node *list = NULL;
  
  node *node1 = malloc(sizeof(node));

  if (node1 == NULL)
  {
    return EXIT_FAILURE;
  }
  
  // Access the memory and put 1
  node1->data = 1;
  node1->next = NULL; 
  
  list = node1;

  node1 = malloc(sizeof(node));

  if (node1 == NULL)
  {
    free(list);
    return EXIT_FAILURE;
  }

  node1->data = 2;
  node1->next = NULL;

  list->next = node1;

  for (node *temp = list; temp != NULL; temp = temp->next)
  {
    printf("%i\n", temp->data);
  }

  while (list != NULL)
  {
    node *temp = list->next;
    
    free(list);

    list = temp;
    
  }


  return EXIT_SUCCESS;
}
