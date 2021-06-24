# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

    int a = 2;
    char d = 'x';

    //Codigo com if

   /* if(a==1){
        printf("\n A opção escolhida é : 1");
    }else if(a==2){
        printf("\n A opção escolhida é : 2");
    }else if(a==3){
        printf("\n A opção escolhida é : 3");
    }else {
        printf("\n A opção Invalida");
    }

    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");*/

    //Codigo com Switch
    switch (d){
        case 'x':
            printf("\n A opção escolhida é a letra: X");
            break;
        default:
             printf("\n A opção Invalida");
             break;
    }

    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //Codigo com switch utilizando Char:
    switch (a){
        case 1:
            printf("\n A opção escolhida é : 1");
            break;
        case 2:
            printf("\n A opção escolhida é : 2");
            break;
        case 3:
            printf("\n A opção escolhida é : 3");
            break;
        default:
             printf("\n A opção Invalida");
             break;
    }
  printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    system("\npause");

    }
