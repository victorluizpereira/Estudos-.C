#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    //break --> interrompe o nosso ciclo
    //continue --> interrope o nosso laço

    for(int x=0; x<=100; ++x){
        if(x ==2){
            printf("-\n");
            continue;//quando x ==20, interrompa somente o laço atual, pula para o próximo
        }

        if(x==8){
            break;// quando x==80, interrompe todo o loping
        }

        printf("%d\n", x);

    }


    return 0;
}
