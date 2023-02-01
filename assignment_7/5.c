// Write a function in C to count a total number of duplicate
// elements in an array.

#include <stdio.h>

int numberOfDuplicates(int *arr, int size) {
  int flag[size];
  for (int i = 0; i < size; i++) {
    if (!flag[i]) {
      for (int j = 0; j < size; j++) {
        flag[j] = a[i] == a[j];
        flag[i] == flag[i] || flag[j];
      }
    }
  }
  return n;
}

int main() { return 0; }