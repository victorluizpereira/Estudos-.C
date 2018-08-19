#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>

int main(void){//utilização de vetores e matrizes em funções
    int vet[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2,};//erro tratamento de vetores inadequado
    int i;//ciclo para mostrar todos os vetores
    void ordem(int vetor[], int n );// não há a necessidade de informar o peso do vetor

    ordem(vet, 10);//chamando a função, pode passar somente como nome o vetor

    for(i = 0; i<10; ++i){
        printf("%i", vet[i]);
    }

    return 0;
}
void ordem(int vet[], int n ){//n vai informar quantas vezes serão executadas a função
    int i, j, temporaria;

    for(i = 0; i < n; ++i){
        for(j = ++i; j < n ; ++i){
            if(vet[i] > vet[j]){
                temporaria = vet [i];
                vet[i] = vet [j];
                vet[j] = temporaria;
            }
        }
    }
}
