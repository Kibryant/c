#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void free_tree(node *root);
void print_tree(node *root);
bool search_tree(node *root, int value);

typedef struct node
{
  int data;
  struct tree *right_node;
  struct tree *left_node;
}
node;

int main(int argc, char *argv[])
{
  node *tree = NULL;

  node *n = malloc(sizeof(node));

  if (n == NULL)
  {
    return EXIT_FAILURE;
  }

  n->data = 2;
  n->left_node = NULL;
  n->right_node = NULL;

  tree = n;

  n = malloc(sizeof(node));

  if (n == NULL)
  {
    free_tree(tree);
    return EXIT_FAILURE;
  }

  n->data = 1;
  n->left_node = NULL;
  n->right_node = NULL;

  tree->left_node = n;

  n = malloc(sizeof(node));

  if (n == NULL)
  {
    free_tree(tree);
    return EXIT_FAILURE;
  }

  n->data = 3;
  n->left_node = NULL;
  n->right_node = NULL;

  tree->right_node = n;

  if (search_tree(tree, 3))
  {
    printf("Found\n");
  }
  else
  {
    printf("Not found\n");
  }

  print_tree(tree);

  return EXIT_SUCCESS;
}

void free_tree(node *root)
{
  if (root == NULL)
  {
    return;
  }

  free_tree(root->left_node);
  free_tree(root->right_node);

  free(root);
}

void print_tree(node *root)
{
  if (root == NULL)
  {
    return;
  }

  print_tree(root->right_node);
  printf("%d\n", root->data);
  print_tree(root->left_node);
}

bool search_tree(node *root, int value)
{
  if (root == NULL)
  {
    return false;
  }

  if (root->data == value)
  {
    return true;
  }

  if (value < root->data)
  {
    return search_tree(root->left_node, value);
  }
  else
  {
    return search_tree(root->right_node, value);
  }
}