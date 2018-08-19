#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gconio.h>

int main(){
    /* Média de alunos */
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[4][4] = {0};
    float mediasAlunos[4] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno 1: \n");

    for(int aluno = 0; aluno < numeroDeAlunos; ++aluno){
        for(int notas = 0; notas < bimestresAnuais; ++notas){
            scanf("%f", &notasAlunos [aluno][notas]);
            media += notasAlunos [aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;

        printf("Insira as 4 notas do aluno %i: \n", aluno + 2);
        }

        for(int aluno = 0; aluno < numeroDeAlunos; ++aluno){
            printf("A media do aluno %i é %.2f\n", aluno + 1, mediasAlunos[aluno]);

    }



    return 0;
}
