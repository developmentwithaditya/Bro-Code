#include <stdio.h>
#include <math.h>

int main() {

// Math function is usefull to calculate the result of various math equations
// You should include a <math.h> header file in your c file to use math function 

double A = sqrt(5);
double B = pow(2, 2);
int C = round(3.14);
int D = ceil(3.14);
int E = floor(3.99);
double F = fabs(-100);
double G = log(3);
double H = sin(45);
double I = cos(45);
double J = tan(45);

printf("Square root of 5 is: %lf \n", A);
printf("Power of 2^2 is: %lf \n", B);
printf("Round of 3.14 is: %d \n", C);
printf("Ceil of 3.14 is: %d \n", D);
printf("Floor of 3.99 is: %d \n", E);
printf("Fabs of -100 is: %lf \n", F);
printf("Log of 3 is: %lf \n", G);
printf("Sin of 45 is: %lf \n", H);
printf("Cos of 45 is: %lf \n", I);
printf("Tan of 45 is: %lf \n", J);
    return 0;
}