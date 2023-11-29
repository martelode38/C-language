
#include <stdio.h>


void main(){

    int m;

    scanf("%d", &m);

    int vetor[m];

    for(int i = 0; i < m; i++){

        scanf("%d", &vetor[i]);
    }

    int aux;

    for (int i= 1; i < 10; i++) {

        for (int j = 0; j < 10 - i; j++) {


            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }}}

    printf("ordenado ");

    for(int i = 0; i < m; i++){

        printf("%d\n", vetor[i]);
    }

}
