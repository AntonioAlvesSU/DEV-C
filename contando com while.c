# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

int Res=1;

while (Res <=40){

    printf("\nResultado da contagem = %d ", Res);
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

   if( Res % 2 == 0){
       printf("\nResultado da contagem é par = %d ", Res);
       printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

       }else{
            printf("\nResultado da contagem é impar = %d ", Res);
       printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

       };
    Res++;


}


system("pause");


}
