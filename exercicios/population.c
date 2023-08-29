#include <cs50.h>
#include <stdio.h>

//clang -o population population.c -lcs50

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
       int x;
   
   do
    {
        x = get_int("Começo de populção: ");
    }
    while (x < 9);

    // TODO: Solicite o valor final ao usuário    
    int y;
    
    do
    {
        y = get_int("Final de população: ");
    }
    while (y < x);

    //  // TODO: Calcule o número de anos até o limite
    int counter = 0;
    
    // Continuously add birth rate and subtract death rate until starting is less than ending
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        counter++;
    }
    
    // TODO: Imprima o número de anos
    printf("Aumentará em  %i anos!\n", counter);

}