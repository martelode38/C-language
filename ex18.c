#include <stdio.h>
#include <string.h>

int isPrime(int number) {
        if(number == 2) {
        return 1;
    }

    for(int i = 2; i < number/2 + 1; i++) {
        if(number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int vetor[10] = {2,4,35,50,23,17,9,12,27,5};

    int maior, media;

    maior = vetor[0];

    for(int j = 1; j < 15; j++){

        if(vetor[j] > maior){


            maior = vetor[j];
        }
    }

     printf(" maior %d\n", maior);








    int k, j, aux;

    for (int i= 1; i < 10; i++) {

        for (int j = 0; j < 10 - i; j++) {


            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
printf("ordenado ");

for(int i = 0; i < 10; i++){

    printf("%d ", vetor[i]);
}

printf("\n primos ");

    for(int i = 0; i < 10; i++) {


        if(isPrime(vetor[i])) {
            printf("%d ", vetor[i]);
        }
    }




    for(int i = 0; i < 10; i++){

        media += vetor[i];
    }

    media = media / 10;

    printf("\na media e %d",media);

}

