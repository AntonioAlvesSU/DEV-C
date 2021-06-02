# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

     int resp = 1;

     do{
        //printf("\n%d", resp);
        //printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
        if( resp % 2 == 0){
        printf("\nResultado da contagem é par = %d ", resp);
            }else{
                printf("\nResultado da contagem é impar = %d ", resp);
                printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

        }
        resp++;

     }while(resp <= 40);

system("pause");
}
