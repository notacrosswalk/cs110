#include <stdio.h>
#include <math.h>

int reverse(int n)
{
    // To generate the upside-down version
    int result = 0;
    int n_copy = n;
    while(n_copy > 0)
    {
        int digit = n_copy % 10;
        int new_digit;
        // Converting the digit to its upside-down form
        if(digit == 0 || digit == 1 || digit == 2 || digit == 5 || digit == 8)
            new_digit = digit;
        else if(digit == 6)
            new_digit = 9;
        else if(digit == 9)
            new_digit = 6;
        else
            return 0; // So that isAlpha(int n) returns 0 too
        result = result*10 + new_digit;
        n_copy /= 10;
    }
    return result;
}

int mirror(int n)
{
    // To generate the mirrored version
    int result = 0;
    int n_copy = n;
    while(n_copy > 0)
    {
        int digit = n_copy % 10;
        int new_digit;
        // Converting the digit to its mirrored form
        if(digit == 0 || digit == 1 || digit == 8)
            new_digit = digit;
        else if(digit == 2)
            new_digit = 5;
        else if(digit == 5)
            new_digit = 2;
        else
            return 0; // So that isAlpha(int n) returns 0 too
        result = result*10 + new_digit;
        n_copy /= 10;
    }
    return result;
}

int isPrime(int n)
{
    if(n <= 1)
        return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int isAlpha(int n)
{
    if(!isPrime(n))
        return 0;
    else if(!isPrime(reverse(n)))
        return 0;
    else if(!isPrime(mirror(n)))
        return 0;
    else if(!isPrime(reverse(mirror(n))))
        return 0;
    return 1;
}

void printAlphaInRange(int a, int b)
{
    printf("The alpha numbers in the range [%d, %d] are\n", a, b);
    int format_help = 1; // For output-formatting
    for(int i = a; i <= b; i++)
    {
        if(isAlpha(i))
        {
            printf("%d\t", i);
            // Formatting the output
            if(++format_help == 5)
            {
                format_help = 1;
                printf("\n");
            }
        }
    }
    printf("\n");
}

int main()
{
    int x, y;
    printf("Enter a, b for the range [a, b].\n"
        "Note: a, b are positive integers.\n");
    scanf("%d %d", &x, &y);
    printAlphaInRange(x, y);
    
    return 0;
}