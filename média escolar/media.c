#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

 int main(){
    float not1, not2, not3, not4, media;

    printf("\t\t======== Calcular a media escolar 1.0 =========\n\n");
    printf("\nDigite a primeira nota:\t");
    scanf("%f", &not1);
    while(not1 > 10){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a primeira nota:\t");
        scanf("%f", &not1);
    }
    while(not1 < 0){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a primeira nota:\t");
        scanf("%f", &not1);
    }

    printf("\nDigite a segunda nota:\t");
    scanf("%f", &not2);
     while(not2 > 10){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a segunda nota:\t");
        scanf("%f", &not2);
    }
    while(not2 < 0){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a segunda nota:\t");
        scanf("%f", &not2);
    }

    printf("\nDigite a terceira nota:\t");
    scanf("%f", &not3);
    while(not3 > 10){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a terceira nota:\t");
        scanf("%f", &not3);
    }
    while(not3 < 0){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a terceira nota:\t");
        scanf("%f", &not3);
    }

    printf("\nDigite a quarta nota:\t");
    scanf("%f", &not4);
    while(not4 > 10){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a quarta nota:\t");
        scanf("%f", &not4);
    }
    while(not4 < 0){
        printf("\nvalor inválido, digite novamente.\n");
        printf("\nDigite a quarta nota:\t");
        scanf("%f", &not4);
    }

    media=(not1+not2+not3+not4)/4;

    printf("\nSua média é:%f\t\t", touppermedia);

    if(media >= 7){
        printf("%f----Aprovado", media);
    }
    else{
        printf("%f----Reprovado", media);
    }

    return 0;
 }
