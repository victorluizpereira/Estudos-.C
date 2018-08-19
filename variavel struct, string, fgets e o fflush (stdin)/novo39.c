#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>
#include<math.h>
#include<string.h>//define strings com strcpy em combinação de char se função =int

int main(){

    struct ficha_de_aluno//Uma struct é uma variável especial que contém diversas outras variáveis normalmente de tipos diferentes
    {
        char nome[50], diciplina[30];
        float np1, np2, media;
    };

    printf("\n---------------Cadastro de aluno ---------------\n\n\n");

    printf("Nome do aluno ……: ");
    fflush(stdin);//limpa as informações do tecaldo buffer

    /*usaremos o comando fgets() para ler strings, no caso o nome
    do aluno e a disciplina
    fgets(variavel, tamanho da string, entrada)
    como estamos lendo do teclado a entrada é stdin (entrada padrão),
    porém em outro caso, a entrada tambem poderia ser um arquivo */

    struct ficha_de_aluno aluno;

    fgets(aluno.nome, 40, stdin);

    printf("Disciplina ……: ");
    fflush(stdin);//tipo scanf
    fgets(aluno.diciplina, 40, stdin);//armazena na variável dentro da variavel struct, 40 a memoria que vai ocupar,

    printf("Informe a 1º nota ..: ");
    scanf("%f", &aluno.np1);

    printf("Informe a 2º nota ..: ");
    scanf("%f", &aluno.np2);

    aluno.media = (aluno.np1 + aluno.np2)/2;

    printf("A media do aluno é = %f", aluno.media);

    printf("\n\n ——— As informações são ———\n\n");
    printf("Nome ………..: %s", aluno.nome);
    printf("Disciplina …..: %s", aluno.diciplina);
    printf("Nota da Prova 1 …: %.2f\n" , aluno.np1);
    printf("Nota da Prova 2 …: %.2f\n" , aluno.np2);
    printf("A media do aluno é = %f", aluno.media);

return(0);

   return 0;
}
