#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Variables

    int x;       // decalaring a variable x
    x = 1;       // assgning value to variable x
    int y = 123; // decalaring and assgning a variable y in one line

    // Data Types

    int age = 22;                               // 4 bytes (-2,147,483,648 to +2,147,483,647 (whole number)) (%d)
    float gpa = 9.05;                           // 4 bytes (32 bits of precision) 6 - 7 digites (%f)
    char grade = 'A';                           // store single character (%c)
    char name[] = "Aditya";                     // store multiple chracter ((Array of char)(String)) (%s);
    double d = 3.141592653;                     // 8 bytes (64 bits of pricision) 15 - 15 digits (%lf)
    bool e = true;                              // 1 byte (1 - true  or  0 - false) (%d)
    char f = 120;                               // 1 byte We can store integers in char datatype from (-128 to +127) (%d or %c)
    unsigned char g = 255;                      // 1 byte if we use unsigned keyword to decalare a variable this will be discard all negative value hence our char is store more form (0 to +255) (%c or %d)
    short int h = 32767;                        // 2 bytes (-32,768 to +32,267)
    unsigned short int usi = 65534;             // 2 bytes (0 to +65,535)
    unsigned int k = 4294967295;                // 4 bytes (0 to +4,294,967,295)
    long long int l = 32487327832;              // 8 bytes (-9 quintillion to +9 quintillion) (%lld)
    unsigned long long int m = 324873278323847; // 8 bytes (0 quintillion to +18 quintillion) (%llu)

    printf("My name is: %s \n", name);
    printf("My age is: %d \n", age);
    printf("My cgpa is: %f \n", gpa);
    printf("My grade is: %c \n", grade);
    printf("I am \"Smart\": %d \n", e);
    printf("My \"Smartness\" is: %0.15lf \n", d);
    printf("I am very \"Genius\": %c \n", f);
    printf("\"Yes Yes Yes\" %c \n", g);
    printf("short int %d \n", h);
    printf("Unsinged short int %d \n", usi);
    printf("Unsinged int %u \n", k);
    printf("Long int %lld \n", l);
    printf("Unsinged long int %llu \n", m);


    return 0;
}