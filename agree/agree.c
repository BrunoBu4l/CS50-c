#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //clang -o agree agree.c -lcs50
    
    //recebe y/Y ou n/N
    char c = get_char("Do you agree? ");

  
   if(c == 'y' || c== 'Y'){
    printf("Agreed. \n");
   }else if(c =='n' || c == 'N'){
    printf("Not Agree. \n");
   }else{
    printf("Please, only digit y/Y for yes or n/N for no!\n");
   }
   
}