#include <stdio.h>

int main() {
    int x, soma = 0;

    do {
        printf("Digite um inteiro menor que 500: ");
        scanf("%d", &x);

        if (x > 0 && x < 500) {
            break;
        }

        printf("Valor inválido. Tente novamente.\n");

    } while (1);

    for (int i = 1; i <= x; i++) {
        soma += i;
    }

    printf("O total do somatório é: %d\n", soma);

    return 0;
}
