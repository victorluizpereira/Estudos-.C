#include<stdio.h>
#include<ctype.h>

int main(){

    int i;
    for(i = 1; i<=20; ++i){
        if(i % 3 == 0 && i % 9 == 0){
            printf("%i Numero divisível por 3 e 9\n", i);
            break;
        }else{
            printf("%i não é, Proximo numero\n", i);
        }
    }

    return 0;
}
