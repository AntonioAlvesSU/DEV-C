# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

     int valor;

     printf(" Digite um valor:\n");

        scanf("%d", &valor);

            if( valor % 2 == 0){

            printf("\n O valor � par\n");

            }else{

            printf("\nO valor � impar\n");
            printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

}
system("pause");
}
