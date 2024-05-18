#include <stdio.h>

void hello(char[], int); // Function Prototype

int main()
{

    // This is the another way to declare a function
    // Function declaretion, without body before main()
    // Ensure that calls to a function are made with the correct arguments

    // Important Notes:

    // Many C compilers do not check for parameter matching
    // Missing arguments result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // Why we use it?

    // 1. Helps Debugging
    // 2. Commonly used in header files
    // 3. Easier to navigate a program w/ main() to the top

    char name[] = "Aditya";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s \n", name);
    printf("You are %d years old \n", age);
}