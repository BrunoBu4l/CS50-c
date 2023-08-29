#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, World!");//clang -o hello hello.c -lcs50
    string answer = get_string("What's your name?");
    printf("hello, %s", answer);
}