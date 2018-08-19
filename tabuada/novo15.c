#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<stdbool.h>

int main(){
    /*for(valor incial; fazer enquanto; atualização)

    for(int a=2, b=9; a <= 10&&b>=0; ++a, --b){
        printf("%d - ", a);
        printf("%d\n", b);
    }*/
    int x=0, tabuada = 0;
    printf("\nDigite a tabuada que você deseja\n\t\t\t\n>>>");
    //tabuada = getche();//getcher, getcha, getch só funciona com carcateres
    scanf("%i", &tabuada);

    for( x=1; x<=10; ++x){
        printf("%i*%i = %i\n", x, tabuada, x*tabuada);
    }
    return 0;
}
