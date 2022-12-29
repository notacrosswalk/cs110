#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the temperature in Celcius. \n");
    c = 35.0;
    f = (c*9.0/5.0) + 32;
    printf("Temperature in Fahrenheit : %f degrees. \n", f);
    return 0;
}
