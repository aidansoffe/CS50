#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me a number: ");
    int n = get_int();
    if (n > 0)
    {
        printf("You picked a positive number!\n ");
    }
    else if (n == 0)
    {
        printf("You picked a zero!\n ");
    }
    else
    {
        printf("You picked a negative number!\n ");
    }
}