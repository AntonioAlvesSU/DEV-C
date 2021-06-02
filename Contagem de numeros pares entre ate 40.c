# include <stdio.h>
# include <stdlib.h>
#include <locale.h>


void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritimo que imprima os números pares até 40(usando while, Do while,or For)

   int i;

   for(i = 0; i<=40; i++){
       if(i % 2 == 0){
          printf("%d é par \n", i);
          printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
       } else {
            printf("%d é impar \n", i);
            printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

            }
   }



    system("\npause");

    }
