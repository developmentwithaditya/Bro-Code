#include <stdio.h>
#include <ctype.h>

int main()
{

    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); // This function will convert lowercase input to uppercase

    if (unit == 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Farenheit is: %.1f \n", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.1f \n", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measurement", unit);
    }

    return 0;
}