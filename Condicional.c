# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

    //Definindo uma variavel
    int a = 5, opcao= 5;
    float b = 20.5;
    char c = 'X';

    //Condicional simples
    if(a == 5){
       printf("\n A Variavel a = 5");
    }
     if(b == 20.5){
       printf("\n A Variavel b = 20.5");
     }
     if(c == 'X'){
       printf("\n A Variavel C = X ");
     }

    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");


    //Verificando se o número é par ou impar
    if(a % 2 == 1){
         printf("\n A Variavel a eh impar");
    }else{
        printf("\n A Variavel a eh par");
    }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //Condicional Composta
    if(opcao == 1){
        printf("\n A opcao = 1");
    }else if(opcao == 2){
        printf("\n A opcao = 2");

    }else{
        printf("\n A opcao Selecionada não Existe");
    }
     printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    system("\npause");

    }
