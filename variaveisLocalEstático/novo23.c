#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>

int main(){
    void teste(void);

    teste();// TESTE PARA O USO DE VARIÁVEL AUTOMATICA E O USO DO RETORN DE STATIC
    teste();//  DA VARIÁVEL ESTATICA, VALOR CONSTANTE E RECICLÁVEL ELA POSSÍBILITA
    teste();//  UMA MUDANÇA PÓIS ARMAZENA SEUS VALORES

    return 0;
}

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;//Static declaração ao tipo da variável, não perde o seu valor cada vez que é chamada diferente da automática
    variavelLocalEstatica *= 4;

    printf("Local Automatica = %i\n", variavelLocalAutomatica);
    printf("Local Estatica = %i\n", variavelLocalEstatica);

}

