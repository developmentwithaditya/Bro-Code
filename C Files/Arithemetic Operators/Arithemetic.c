#include <stdio.h>

int main()
{

    // arithmetic operator used to perfrom mathematical operation to the variable

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (mudulus)
    // ++ (incrementation (int i = 1; i = i + 1; value of i is now : 2)))
    // -- (decrementation (int i = 2; i = i - 1; value of i is now : 1))

    int x = 5;
    int y = 2;

    int a = x + y;
    int b = x - y;
    int c = x * y;
    float d = x / (float)y; // Explicit type caste (int to float)
    int e = x % y;

    int f = ++x; // x = x + 1; (Pre increment)
    int g = --y; // y = y - 1; (Pre decrement)

    int h = x++; // x = x + 1; (Post increment)
    int i = y--; // y = y - 1; (Post decrement)

    printf("Addition of x + y is : %d \n", a);
    printf("Subtraction of x - y is : %d \n", b);
    printf("Multiplication of x * y is : %d \n", c);
    printf("Division of x / y is : %.1f \n", d);
    printf("Remainder of x / y is : %d \n", e);

    printf("Pre incrementaion of ++x is : %d \n", f);
    printf("Pre decremention of --y is : %d \n", g);

    printf("Post incrementaion of x++ is : %d \n", h);
    printf("Post decremention of y-- is : %d \n", i);

    return 0;
}