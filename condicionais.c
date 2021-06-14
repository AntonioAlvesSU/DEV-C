# include <stdio.h>
# include <stdlib.h>
#include <locale.h>

void main(){

     //Para usar acentos
     setlocale(LC_ALL,"");

    float nota1, nota2, nota3,media;
    printf("\nDigite a nota1\n");
    scanf("\n%f", &nota1);

    printf("\nDigite a nota2\n");
    scanf("\n%f", &nota2);

    printf("\nDigite a nota3\n");
    scanf("\n%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nMédia do aluno foi: %.2f", media);

    if(media > 7){
        printf("\nO aluno foi aprovado! Parabéns pela conquista!");
    }else{
        printf("\nO aluno foi reprovado! Estude mais na próxime você consegue!");
    }
        printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");


    }
