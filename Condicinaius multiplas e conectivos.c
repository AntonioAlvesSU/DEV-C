# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

     //Definindo variáveis
     int a =10, b=15 , c=20;

     // concetivo logico AND ( E ), para este concetivo funciona como uma porta logida AND tudo tem verdeiro para haver saída
     if(a > 5 && a < 15){
        printf("\n A variável 'A' esta entre 5 e 15\n\n");
     }

     // concetivo logico OR  (ou) , para este concetivo funciona comparando for  verdeiro para haver saída
     if(b > 5 || b > 15){
        printf("\n A variável 'A' é mairo que  5 ou 15\n\n");
     }

     // Misturando conectivos
     if((a > 5 || a < 15) || c == 20){
        printf("\n A variável 'A' esta entre 5 e 15 ou 'C' vale 20\n\n");
     }

       printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");


     system("\npause");

    }
