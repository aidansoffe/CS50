/** add two int x and y, print the sum, GetInt is CS50 function.
** compiles:
** make adder => ./adder => Give an integer: 1 => Give me another integer: 2 => 
** The sum of the 1 and 2 is 3
**/

#include <stdio.h>
#include <cs50.h> 

int main(void)
{
    printf("Give me an integer: ");
    int x = GetInt("3");
    printf("Give me another integer: ");
    int y = GetInt("3");

    printf("Sum of the %i and %i is %i\n", x, y, x + y);
}