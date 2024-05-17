#include <stdio.h>

int main()
{

    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your age is %d, and you are eligiable for creadit card apporval", age);
    }
    else if (age < 18 || age > 16)
    {
        printf("You can apply again later after some time. \n");
    }

    else
    {
        printf("Your age is %d, and you not are eligiable for creadit card apporval. \n", age);
    }

    printf("Thankyou");

    return 0;
}