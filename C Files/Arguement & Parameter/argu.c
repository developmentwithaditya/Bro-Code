#include <stdio.h>

void birthdaywish(char name[], int age) {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s to you!", name);
    printf("\nYou are now %d years old! \n", age);
}

int main() {

char name[] = "Aditya"; // These are arguements that is invoke by the function to work with some dynamic data
int age = 21;

birthdaywish(name, age); 

    return 0;
}