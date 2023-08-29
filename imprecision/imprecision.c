//imprecision

//clang -o imprecision imprecision.c -lcs50

#include <cs50.h>
#include <stdio.h>


int main(void)
{
       float x = get_float("x: ");
    float y = get_float("y: ");
    	
    printf("%.50f\n", x / y); //Com % .50f , podemos especificar o número de casas decimais exibidas.
    
}
