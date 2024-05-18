#include <stdio.h>

double square(double x)
{
    double result = x * x;
    return result; // this will return the result back to calling function in main()
}

int main()
{

    // Return --> returns a value back to calling function

    double x = square(3.14);
    printf("The square of 3.14 is: %lf \n", x);

    return 0;
}