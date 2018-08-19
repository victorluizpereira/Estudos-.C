#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    int vetor[5]={2, 1, 3, 1, 3, 0};//maneira mais facil de declarar valores para vários vetores
    int matriz[2]/*linhas*/ [2] /*colunas*/ = {{1, 2, 3},
                                               {4, 5, 6},
                                               {7, 8 ,9}}; // matrizes pode ser feito tudo junto porém fica confuso exemplo {1,2,3,4,5,6,7,8,9}
    printf("%i", matriz[0] [0]);
    printf("\n");

        /* tratar matrizes */

    int matri1[5] [5] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

    for(int m = 0; m < 5; ++m){
        for(int n = 0 ; n < 5; ++n){
            printf("%i ", matri1[m] [n]);
        }
        printf("\n");
    }


    return 0;
}
