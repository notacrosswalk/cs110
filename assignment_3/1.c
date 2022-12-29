/* Execute the following program considering x in {0, 1, 5, 7, 10} and y in 
{0, 1}. Realize the causes of different outputs: */

#include <stdio.h>

int main() {
    int n = 7; // try with 0, 1, 5, 7, 10, and 20
    int condition = 0; // try with 0 and 1
    if (n == 5) {
        printf("%d\n", __LINE__);
    } else if (n % 2 == 0) {
        if (n == 10 && condition == 1) {
            printf("%d\n", __LINE__);
        } else {
            printf("%d\n", __LINE__);
        }
            printf("%d\n", __LINE__);
    } else if (condition) {
            printf("%d\n", __LINE__);
    } else if (0) {
            printf("%d\n", __LINE__);
    } else {
            printf("%d\n", __LINE__);
    }
    printf("%d\n", __LINE__);
    return 0;
}