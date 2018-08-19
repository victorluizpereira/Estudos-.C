#include<stdio.h>

int main(void){//comportamento de variaveis
    void funcaoPrint(int x, int vetor[]);
    int x = 10;//quando passar a variável para a função ela vai ser copiada para ser recebida tanta int quanto float etc, para retornar com um valor diferente precisa dar return
    int vetor [3] = {10};//trabalham com valores originais, pode ser alterado dentro de funções, ou seja eu estou passando para a função um endereço na matriz, possibilitando manipulação interna e externa.

    funcaoPrint(x, vetor);

    printf("Variavel int na função principal = %d \n", x);
    printf("Vetor na função principal = %d \n", vetor[1]);


    return 0;
}
void funcaoPrint(int x, int vetor[]){
    x = x + 10;
    vetor[1] = 20;

    printf("Variavel int na função print = %d \n", x);
    printf("vetor na função print = %d \n\n",  vetor[1]);
}
