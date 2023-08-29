#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //clang -o addition addition.c -lcs50
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("Result: %i \n", x + y);
}