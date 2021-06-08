# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");
    //Definindo Variáveis
    int a = 5, b = 30, c = 50;
    char d ='x';
    //maior
    if(a > 2){
        printf("\n %d É maior que 2", a);
    }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //Maior ou Igral
    if(c >= b){
       printf("\n %d É maior ou Igual que %d", c,b);
    }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //Menor ou Igual
    if(b <= c){
       printf("\n %d É menor ou Igual que %d", b,c);
     }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
    //Menor
    if(a < b){
        printf("\n %d É menor que %d", a,b);
    }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
    //Diferente
    if(b != c){
        printf("\n %d É diferente de %d", b,c);
    }
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
    if(d != 'c'){
        printf("\n %c É diferente de c ", d);
    }
        printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");


    system("\npause");

    }
