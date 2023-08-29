#include <cs50.h>
#include <stdio.h>

    //clang -o mariohard mariohard.c -lcs50
    
    //chama método entre 1 e 8
    int get_enter_int(void);

    //variável 

//método principal
int main(void)
{
    //chamada do método entre 1 e 8
    int hash = get_enter_int();


    //altura
    for (int i = hash; i > 0; i--)
    {
       //espaço vazio antes dos hashes 
       for (int j = i; j > 1; j--)
       {
        printf(" ");
        
       }

        //hashes da esquerda
        for (int d1 = 0; d1 <= (hash-i); d1++)
        {
            printf("#");
        }

        //MODO Díficil

        //separação de hashes
        printf("  ");

        //hashes da direita
        for (int d2 = 0; d2 <= (hash-i); d2++)
        {
            printf("#");
        }
       
       //nova linha
       printf("\n");

    }
    
}

//Método entre 1 e 8
int get_enter_int(void){
    int n;
    do{
        n = get_int("height: ");
    }while (n < 1 || n > 8);
    return n;
}
    