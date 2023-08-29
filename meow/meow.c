#include <stdio.h>

//clang -o meow meow.c -lcs50 

void meow();

int main(void)
{
    meow(5);
}

void meow(int n){
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    
}