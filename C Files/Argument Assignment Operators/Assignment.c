#include <stdio.h>

int main()
{

    // Argument assignment operators --> used to replace where an operator takes a variable as one of its arguments and then assigns the result back to the same variable

    // Example
    // x = x + 1;
    // x+=1; --> short form of (x = x + 1);

    int x = 10;

    // Addition
    x = x + 1;
    x += 1;

    // Subtraction
    x = x - 1;
    x -= 1;

    // Multiplication
    x = x * 1;
    x *= 1;

    // Division
    x = x / 1;
    x /= 1;

    // Mudulus
    x = x % 1;
    x %= 1;

    printf("Argument assignment of addition \"x += 1\" is: %d \n", x);
    // So-on....
    printf("Argument assignment of division \"x /= 1\" is: %d \n", x);

    return 0;
}