#include <stdio.h>

int main() {

const double PI = 3.14159;
double radius;
double circumference;

printf("Enter radius of circle: ");
scanf("%lf", &radius);

circumference = 2 * PI * radius;
printf("Circumference of given circle is: %lf \n", circumference);

printf("Thankyou");

    return 0;
}