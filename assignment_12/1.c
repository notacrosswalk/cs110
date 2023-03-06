#include <stdio.h>

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