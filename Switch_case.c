# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

    int a = 2;
    char d = 'x';

    //Codigo com if

   /* if(a==1){
        printf("\n A op��o escolhida � : 1");
    }else if(a==2){
        printf("\n A op��o escolhida � : 2");
    }else if(a==3){
        printf("\n A op��o escolhida � : 3");
    }else {
        printf("\n A op��o Invalida");
    }

    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");*/

    //Codigo com Switch
    switch (d){
        case 'x':
            printf("\n A op��o escolhida � a letra: X");
            break;
        default:
             printf("\n A op��o Invalida");
             break;
    }

    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //Codigo com switch utilizando Char:
    switch (a){
        case 1:
            printf("\n A op��o escolhida � : 1");
            break;
        case 2:
            printf("\n A op��o escolhida � : 2");
            break;
        case 3:
            printf("\n A op��o escolhida � : 3");
            break;
        default:
             printf("\n A op��o Invalida");
             break;
    }
  printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    system("\npause");

    }
