#include <stdio.h>
#include <stdlib.h>

//Função principal
void main(){

    //definindo variaveis
     int a = 1, b=10;

    //contando até 10
    while (a <= 10){

        //imprimindo o resultado
        printf("\n%d",a);

        //incremento
       // a = a + 1;
       a ++;
    }
    //contagem regressiva
    while (b >= 1){

        //imprimindo o resultado
        printf("\n%d",b);

        //incremento
        //b = b - 1;
        b --;
    }

    //pausa no progrma
    system("pause");
}
