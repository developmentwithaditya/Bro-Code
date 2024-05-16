#include <stdio.h>

int main() {

/* Escape squence -->  character consisting of a backslach '\' 
                       followed by a letter or combination of digits.
                       they specify action a line or string of text.

    Examples:
                    \n --> new line
                    \t --> tab
                    \"Text\" --> display quote ("Text").
                    \\ --> display a backslash.
*/

printf("I \nlike to \nplay football \n");
printf("\nI \nlike to \nplay \"football\" \n");
printf("1\t2\t3\t4\t5\n6\t7\t8\t9\t10 \n");

    return 0;
}