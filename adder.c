// add two int x and y, print the sum

#include <stdio.h>
#include "CS50_library/src/cs50.h" 

int main(void)
{
    printf("Give me an integer: ");
    int x = get_int("3");
    printf("Give me another integer: ");
    int y = get_int("3");

    printf("Sum of the %i and %i is %i\n", x, y, x + y);
}