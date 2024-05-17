#include <stdio.h>

int main()
{

    // Switch --> A more efficient alternative to using "else if" statements
    //            Allows a value to be tested for quality against many cases

    char grade;

printf("Enter your garde: ");
scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect! \n");
        break;
    case 'B':
        printf("You did good \n");
        break;
    case 'C':
        printf("You did okay \n");
        break;
    case 'D':
        printf("At least it's not an F \n");
        break;
    case 'F':
        printf("You FAILED \n");
        break;
    default:
        printf("That's not a valid grade \n");
        break;
    }

    return 0;
}