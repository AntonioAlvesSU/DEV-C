# include <stdio.h>
# include <stdlib.h>
#define CAM 40
//Função principal do programa
void main(){

    int j = 1,t = 40, b = 40;

    for(j =40; j >0; j--){

      printf("\nDecrescendoFor = %d\n",j);

    }

        printf("______________________________");{
        }
    while(t>=0){
        printf("\nDecrescendoWhile = %d\n", t);
        t--;
    }
            printf("______________________________");{
        }

    b=40;

     do{

        printf("\nDecrescendoDoWhile = %d\n", b);

        b--;


    } while(b >=0);

    printf("______________________________");{
        }

    b = 0;

     do{

        printf("\nDecrescendoDoWhile = %d\n", b);

        b++;


    } while(b <= 40);






   //Pausa o programa após executar
    system("pause");

    }
