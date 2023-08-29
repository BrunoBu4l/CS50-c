#include <cs50.h>
#include <math.h>
#include <stdio.h>

//clang -o cash cash.c -lcs50


//método principal
int main(void)
{
    //método de entrada em dólares
    float dollars;
    do{
        dollars = get_float("Troca devida: ");
    }while ( dollars < 0);

    //conversão de float para int (round não funciona)
    int cents = (int)(dollars * 100);
    
    //número total de moedas
    int coins = 0;

    //contagem de moedas individuais
    int vinte_cinco = 0;
    int dez = 0;
    int cinco = 0;
    int um = 0;

     // Calculos de 25, 10, 5 e 1 respectivamente
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
        vinte_cinco++;
    }

    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
        dez++;
    }

    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
        cinco++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
        um++;
    }

    //Impressões na tela
    //printf("Dolares: %.2f \n", dollars);
    printf("Número total de moedas: %i \n", coins);
    printf("25¢: %i x 25 = %.2f \n 10¢: %i x 10 = %.2f \n 5¢: %i x 5 = %.2f \n 1¢: %i x 1 = %.2f\n",
            vinte_cinco, vinte_cinco * 0.25, dez, dez * 0.10, cinco, cinco * 0.05, um, um * 0.01);
    
}
