#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>
int main(){
    int fatorial(int x);//fatorial vai receber a variável x
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial é %d", resultado);


    return 0;
}//função recorsiva é uma função que chama ela mesma, quando vc chama ela mesma ela fica copiando a si mesma até ser resolvida
int fatorial(int x){
    int resultado;

    if(x == 0 )
        resultado = 1;
    else{
        resultado = x * fatorial (x - 1 );//vai trabalhar com a cópia fantasma da função pois é um laço
    }

    return resultado;
}

