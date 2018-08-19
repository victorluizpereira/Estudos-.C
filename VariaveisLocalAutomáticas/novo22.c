#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<gconio.h>

int main(){
    void teste(void);

    teste();
    teste();
    teste();

    return 0;
}

void teste(void){
    int variavelLocalAutomatica = 2;//os valores não serão reciclados e alterados após a execução da segunda vez do programa
    variavelLocalAutomatica*=2;

    printf("%i\n", variavelLocalAutomatica);//ele é automática pois os valores atribuidas as variáveis após a execução desaparece até haja a execução novamente
}
