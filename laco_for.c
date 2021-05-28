# include <stdio.h>
# include <stdlib.h>

void main(){

    int cont;
    //laço de repetição com FOR( foi criado uma tabuada de 5
    for(cont = 1; cont <= 10; cont++){

    printf ("\n 5 X %d = %d" ,cont, 5 * cont );

    }
    //contando de 1 em 1
    for(cont = 0; cont <= 10; cont++){

    printf ("\n%d" ,cont);
    }
    //contando de 4 em 4
    for(cont = 0; cont <= 40; cont= cont + 4){

    printf ("\n%d" ,cont);
    }
    //contagem regressiva
    //for(cont =40; cont > 0; cont--){
      for(cont =40; cont > 0; cont= cont - 4){
    printf ("\n%d" ,cont);
    }

    system("pause");



}
