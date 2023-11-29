#include <stdio.h>
//q3

void main() {
    int idade, total_idades = 0, quantidade = 0;
    float media;
    char opcao;


    do {
        int i;

        while( i != 0){
            printf("Digite as idades ou 0 para sair\n");
            scanf("%d", &idade);

            if (idade == 0) {
                break;
            } else {
                total_idades += idade;
                quantidade++;
            }
            i++;
        }
        media = (float) total_idades / quantidade;
        printf("A media de idade e: %.2f\n", media);
        printf("digite s para sair e qualquer tecla para continuar\n");
        scanf(" %c", &opcao);
    } while (opcao != 's');





}
