# Notes
- malloc() allocates a memory block of given size (in bytes) and returns a pointer to the beginning of the block. malloc() doesn’t initialize the allocated memory.
- calloc() allocates the memory and also initializes every byte in the allocated memory to 0.
- The return type of malloc() and calloc is void *
- Type casting
```
// int *p = (int *) calloc(n, sizeof(int));

// char *c = (char *) p; // This is valid
```
- The following are equivalent
```
a[i];
*(a+i);
i[a];
```

# Further reading
- https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
- https://www.geeksforgeeks.org/difference-between-malloc-and-calloc-with-examples/
