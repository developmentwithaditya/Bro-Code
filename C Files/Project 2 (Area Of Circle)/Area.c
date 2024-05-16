#include <stdio.h>

int main() {

double PI = 3.14159;
double radius;
double area;

printf("Enter radius of circle: ");
scanf("%lf", &radius);

area = PI * radius * radius;

printf("Area of given circle is: %lf \n", area);
printf("Thankyou \n");

    return 0;
}