#include <stdio.h>

int main() {

// Continue --> skips rest of code & force the next iteration of the loop
// Break --> exits a loop/switch

for (int i = 1; i <= 20; i++)
{
    if (i == 13)
    {
         continue; // this will check if i is equal to 13 if is true it will be continue
    } else if (i == 15)
    {
        break; // this will execute if i is not equal to 13 if is true it will be exit the loop
    }
    
    
    printf("%d \n", i);
}


    return 0;
}