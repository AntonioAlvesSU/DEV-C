# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

     int lado1, lado2, lado3;

      printf("\n Digite o valor do  lado1:\n");
        scanf("\n%d", &lado1);

      printf("\n Digite o valor do  lado2:\n");
        scanf("\n%d", &lado2);

      printf("\n Digite o valor do  lado3:\n");
        scanf("\n%d", &lado3);

      if( lado1 == lado2 && lado2 == lado3){
        printf("\n Se os lados: 'lado1','lado2','lado3' forem iguais então o triângulo é equilátero\n");
      }else{
          printf("\n Os lados não iguais e por isso não é um triângulo Equilátero\n");

      }
      if( (lado1 == lado2) && (lado2 == lado3)){
        printf("\n O triângulo é Equilátero\n");
      }
      if((lado1 == lado2) && (lado2 != lado3)){
         printf("\n O triângulo é Isoceles\n");
      }
      if((lado1 != lado2) && (lado2 != lado3)){
            printf("\n O triângulo é escaleno\n");
         }
          printf("\n lado1 do triangulo: %.2d\n", lado1 );
          printf("\n lado2 do triangulo: %.2d\n", lado2 );
          printf("\n lado3 do triangulo: %.2d\n", lado3 );
          printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");


    system("\npause");

    }
