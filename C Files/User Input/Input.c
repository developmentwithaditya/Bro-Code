#include <stdio.h>

int main() {

char userName[25]; // 25 bytes
int userAge;

printf("\n Please enter your full name: ");
//scanf("%s", &userName);
fgets(userName, 25, stdin); // this function similiar to scanf but it can read whitespaces

printf("\n How old are you? ");
scanf("%d", &userAge); // scanf is a funtion that used to take user input and assign to a variable (It cannot read any whitespace)


printf("\n Your name is %s ", userName);
printf("\n You are %d years old \n", userAge);

    return 0;
}