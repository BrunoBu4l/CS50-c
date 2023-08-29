#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //clang -o conditions conditions.c -lcs50
    
    //recebe somente números inteiros
    int x = get_int("x: ");
    int y = get_int("y: ");

   //compare x and y
   if(x < y){
    printf("X is less than Y \n");
   }else if(x > y){
    printf("X is greater than Y \n");
   }else{
    printf("X is equal to Y \n");
   }
   
}