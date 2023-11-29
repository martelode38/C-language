#include <stdio.h>


void main() {
    int notas = 0, media = 0, quantidadeNotas = 0, mediaF = 0, menorq5 = 0;
    char op;

    do {
   
        
        while (notas != -1) {
            printf("Digite sua nota ou -1 para sair:\n");
            scanf("%d", &notas);

            if (notas < 0 || notas > 10) {
                printf("Digite apenas notas de 0 a 10.\n");
            }
            else if (notas == -1) {
                break;
            }
            else {
                media += notas;
                quantidadeNotas++;
                if (notas < 5) {
                    menorq5++;
                }
            }
        }
        
        if (quantidadeNotas > 0) {
            mediaF = media / quantidadeNotas;
            printf("Foram digitadas %d notas.\n", quantidadeNotas);
            printf("%d notas foram menores que 5.\n", menorq5);
            printf("sua media foi %d.\n\n", mediaF);
        }
        else {
            printf("Nenhuma nota foi digitada.\n\n");
        }

        printf("Digite 's' para sair ou qualquer outra letra para calcular outra média: ");
        scanf(" %c", &op);

    } while (op != 's');

}
