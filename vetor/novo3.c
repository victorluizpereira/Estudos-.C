#include<stdio.h>
#include<stdlib.h>

int main(){
    int A=5, i, vet[5];/* vet[quantidade de variáveis que ele possui] vetor definido a posição */
    vet[0]=1;/* valor do vetor 0 */
    vet[1]=2;/* valor do vetor 1 */
    vet[2]= A+vet[1];/* valor do vetor 2 */
    printf("vet[0]:\t%d\tvet[2]:\t%d\n", vet[0], vet[2]);/* imprimir na tela as variáveis do vetor 0 e 2 */

    for(i=0; i<6; i++){/* utilizado para facilitar a digitação dos valores das variáveis do vetor */
        printf("\nDigite o numero %d: \t", i);/* imprime na tela as variáveis do vetor e pede a digitação de seus valores */
        scanf("%d", &vet[i]);/* escaneamento dos valores digitados para as variáveis do vetor*/
    }

    for(i=0; i<6; i++) {/* utilizado para facilitar a não ter que efetuar a digitação do printf*/
        printf("\nA posição %d é igual a %d. \t", i, vet[i]);/* imprime na tela as variáveis do vetor além de seus valores correspondentes*/
    }

return 0;
}
