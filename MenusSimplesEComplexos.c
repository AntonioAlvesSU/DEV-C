# include <stdio.h>
# include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definindo Vari�veis
    int opcao;

    while(opcao < 1 || opcao >3){

    printf("Escolha uma opcao:\n");
    printf("\n1-Opcao 1");
    printf("\n2-Opcao 2");
    printf("\n3-Opcao 3\n\n");

    //Lendo a op��o
    scanf("%d", &opcao);
    //Resultado das op��es escolhidas

    switch(opcao){
        case 1:
            printf("\nOPcao 1 foi escolhida");
            break;
        case 2:
            printf("\nOPcao 2 foi escolhida");
            break;
        case 3:
            printf("\nOPcao 3 foi escolhida");
            break;
        default:
            printf("\nOPcao Invalida");
            break;
    }

    //Pausa o programa ap�s executar
    system("pause");
    }
    }

