#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the temperature in Fahrenheit. \n");
    f = 93.0;
    c = (5.0/9.0)*(f-32);
    printf("Temperature in Celcius : %f degrees. \n", c);
    return 0;
}
