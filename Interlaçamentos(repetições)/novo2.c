#include<stdio.h>
#include<stdlib.h>

int main(){
    int A=5, B=2, i;

    for(i=0; i<A; i++)/* for(valor inicial; condição(vai repetir até quando i for < a); o que fazer) */ {
        B = B+1;/* fazer enquanto */
        printf("\nI:\t%d\t B for: \t%d", i, B);
    }

return 0;
}
