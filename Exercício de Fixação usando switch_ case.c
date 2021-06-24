# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");



     float valor1, valor2;
     int opcao;

      printf("\n Digite o valor do  valor1:\n");
        scanf("\n%f", &valor1);

      printf("\n Digite o valor do  valor2:\n");
        scanf("\n%f", &valor2);

      printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

      printf("\n Valor1 %.2f : ", valor1);
      printf("\n Valor2 %.2f : \n", valor2);
      printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

      printf("\n Selecione umas das opções para aplicar a operação matemática :");
      printf("\n 1-Somar :");
      printf("\n 2-Dividir :");
      printf("\n 3-Multiplicar :");
      printf("\n 4-Subtrair :\n");
      scanf("%d",&opcao);

      printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

     switch(opcao){
        case 1:
            printf("\n A soma entre valor1 e valor2 é: %.2f", valor1 + valor2);
            break;
        case 2:
            printf("\n A soma entre valor1 e valor2 é: %.2f", valor1 / valor2);
            break;
        case 3:
            printf("\n A soma entre valor1 e valor2 é: %.2f", valor1 * valor2);
            break;
        case 4:
            printf("\n A soma entre valor1 e valor2 é: %.2f", valor1 - valor2);
            break;
        default:
             printf("\n A opção Invalida");
             break;
     }


    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");



    }
