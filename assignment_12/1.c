#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
    int data;
    struct node_t *next;
} Node_t, *Node;

void printList(Node node)
{
    if(node == NULL) return;
    printf("%d -> ", node->data);
    printList(node->next);
}

void addFirst(Node *node, int data)
{
    Node temp = (Node) calloc(1, sizeof(Node_t));
    temp->data = data;
    temp->next = *node;
    *node = temp;
}

void addLast(Node *node, int data)
{
    Node t = *node;
    if(node == NULL)
    {
        addFirst(node, data);
        return;
    }
    while(1)
    {
        if(t->next == NULL)
        {
            Node temp = (Node) calloc(1, sizeof(Node_t));
            temp->data = data;
            temp->next = NULL;
            t->next = temp;
            break;
        }
        t = t->next;
    }
}

int removeFirst(Node *node)
{
    int value = *node->data;
    Node pnode = *node;
    *node = *node->next;
    free(pnode);
    return value;
}

int removeLast(Node *node)
{
    Node pnode = *node;
    while(1)
    {
        if(pnode->next->next == NULL)
        {
            int value = pnode->next->data;
            free(pnode->next);
            pnode->next = NULL;
            return data;
        }
    }
}

int addAt(Node *node, int data, int index)
{
    int n = 0;
    Node newNode = (Node) calloc(1, sizeof(Node_t));
    Node temp = *node;
    while(temp->next)
    {
        if(n++ == index)
        {

        }
        else
        {
            temp = temp->next;
        }
    }

}

int main() {
  Node list = NULL;
  printList(list);
  addFirst( & list, 10);
  printList(list);
  addFirst( & list, 9);
  printList(list);
  addFirst( & list, 8);
  printList(list);
  addLast( & list, 11);
  printList(list);
  addLast( & list, 12);
  printList(list);
  addLast( & list, 13);
  printList(list);
  int data = removeFirst( & list);
  printf("Removed: %d\n", data);
  printList(list);
  data = removeLast( & list);
  printf("Removed: %d\n", data);
  printList(list);
  int index = 0;
  data = 8;
  if (addAt( & list, data, index))
    printf("Added %d at %d.\n", data, index);
  else
    printf("Failed to add %d at %d.\n", data, index);
  printList(list);
  index = 15;
  data = 13;
  if (addAt( & list, data, index))
    printf("Added %d at %d.\n", data, index);
  else
    printf("Failed to add %d at %d.\n", data, index);
  printList(list);
  index = 5;
  data = 13;
  if (addAt( & list, data, index))
    printf("Added %d at %d.\n", data, index);
  else
    printf("Failed to add %d at %d.\n", data, index);
  printList(list);
  index = 5;
  data = removeFrom( & list, index);
  if (data != INT_MAX)
    printf("Added %d from %d.\n", data, index);
  else
    printf("Failed to add %d from %d.\n", data, index);
  printList(list);
  index = 0;
  data = removeFrom( & list, index);
  if (data != INT_MAX)
    printf("Added %d from %d.\n", data, index);
  else
    printf("Failed to add %d from %d.\n", data, index);
  printList(list);
  index = 2;
  data = removeFrom( & list, index);
  if (data != INT_MAX)
    printf("Added %d from %d.\n", data, index);
  else
    printf("Failed to add %d from %d.\n", data, index);
  printList(list);
}
