
#include <stdio.h>

void main() {

    int idade;
    int media, div;
    int menor = 8000;
    int maior = 0;

    do {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade != 0) {
            div++;
            media += idade;

            if (idade < menor) {
                menor = idade;
            }

            if (idade > maior) {
                maior = idade;
            }
        }
    } while (idade != 0);


        media = media / div ;

    
        printf("total de pessoas: %d\n", div);
        printf("media: %.2f\n", media);
        printf("Menor idade: %d\n", menor);
        printf("Maior idade: %d\n", maior);
    }

