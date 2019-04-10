#include <stdio.c>
#include <cs50.h>

int main(void)
{
    string s = "Maria";
    printf("Hello, %s\n", s);
}

/** GetString is CS50 function, that allows you get a string input. use cs50.h 
** compiles: 
** make hello => ./hello => Hannah => hello, Hannah
**/

int main(void)
{
    string s = GetString();
    printf("hello, %s\n", s);
}