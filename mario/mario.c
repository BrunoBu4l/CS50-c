//abstraction

//clang -o mario mario.c -lcs50

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    //GET positive integer from user 
    int n;

    do{
        n = get_int("width: ");
    }while (n<1);

    //Print out that many question marks
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
}
