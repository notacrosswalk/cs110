# Notes
- The return type of calloc is void *
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
