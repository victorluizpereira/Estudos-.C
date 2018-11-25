#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>

int main(){
    int tamanhoString(char string[]);
    char strin[20];

    printf("Digite uma palavra(string): \n");
    scanf("%s", &strin[20]);

    int num = tamanhoString(strin);

    printf("A string %s possui %i caracteres", strin, num);

    return 0;
}

int tamanhoString(char string[]){

    int numCaracteres = 0;

    while(string[numCaracteres] =! '\0'){
        ++numCaracteres;
    }


    return numCaracteres;
}
