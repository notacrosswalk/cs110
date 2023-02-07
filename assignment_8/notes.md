## Will the following codes run?
- 1
```C
#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

int div(int a, int b) {
    return a/b;
}

void main() {
    int n = (add+div-mul) (12, 2);
}
```
- 2
```C
#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

int div(int a, int b) {
    return a/b;
}

void main() {
    int n = (add-mul+div) (12, 2);
}
```
### Answer
- 1 will lead to a compilation error.
- 2 will run and the answer will be 10 (as )