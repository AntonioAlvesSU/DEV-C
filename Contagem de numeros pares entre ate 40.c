# include <stdio.h>
# include <stdlib.h>
#include <locale.h>


void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritimo que imprima os n�meros pares at� 40(usando while, Do while,or For)

   int i;

   for(i = 0; i<=40; i++){
       if(i % 2 == 0){
          printf("%d � par \n", i);
          printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
       } else {
            printf("%d � impar \n", i);
            printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

            }
   }



    system("\npause");

    }
