#include<stdio.h>
#include<stdlib.h>
#include<gconio.h>
int main(){
    void concatenarStrings(char string1[], int t1,
                           char string2[], int t2,
                           char string3[]);//juntar
    /*char teste[]={'b', 'r', 'a', 's', 'i', 'l'};//tratando strings

    for(int i=0; i<6; ++i){
        printf("%c", teste[i]);
    }
    printf("\n");*/

    char p[] = {'p','a','o',' '};//não precisa informar os pesos do vetor se possue valores
    char p2[] = {'m','o','r','t', 'a', 'd','e', 'l', 'a'};
    char novaPalavra[13];

    concatenarStrings(p, 4, p2, 9, novaPalavra);

    for(int i=0; i<13; ++i){
        printf("%c", novaPalavra[i]);
    }
    printf("\n");

    return 0;
}
void concatenarStrings(char string1[], int t1,
                       char string2[], int t2,
                       char string3[]){
    int i, j;

    for(i=0; i < t1; ++i){
        string3[i] = string1[i];
    }
    for(j=0; j<t2; ++i){
        string3[t1+j]=string2[j];
    }
}
