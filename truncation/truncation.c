#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //clang -o truncation truncation.c -lcs50
    
    //recebe somente números inteiros
    int x = get_int("x: ");
    int y = get_int("y: ");

    //transforma(trunca) os números inteiros para float para poder ser feita a divisão, caso contrario não.
    //usado para não mudar todo o código do programa assim como sua estrutura,
    //permitindo assim fazer contas sem alterar os tipos de dados nos bancos.
    float z = (float) x / (float) y;
    printf("Result: %f \n", z);
}