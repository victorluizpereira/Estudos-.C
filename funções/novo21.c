#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){//existe outras funções além do main
    void imprimaMensagem(void);
    float calcularAreaQuadrado(float x, float y);//declarei uma função

    calcularAreaQuadrado(10.0, 20.0);

    imprimaMensagem();//executou a função, chamar a função vai pular a execução da qui para a outra função

    return 0;
}

void imprimaMensagem(void){//dependendo da posição a funçao não haveria a necessidade de declarar, jogar no topo, mais o correto seria fazer dessa forma em declarar
    printf("teste.");
}
float calcularAreaQuadrado(float x, float y){//float o que a nota abaixo vai retornar para a função main; nome da função; o que a função ira fazer receber

    float area = x*y;
    printf("A area é: %f", area);//vantagens a função pode ser usado como variável facilitando processos repetidos

    return area;
}
