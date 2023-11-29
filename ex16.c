#include <stdio.h>

void main() {

    char time;
    int flamengo = 0, vasco = 0, fluminense = 0, botafogo = 0, outros = 0;
    int entrevistados = 0;



    do {

        printf("digite f p flamengo v p vasco b para botafofo n p fluminense o p outros e r p sair:\n");

        scanf(" %c", &time);


        switch (time) {
            case 'f':
                flamengo++;
                break;
            case 'v':
                vasco++;
                break;
            case 'b':
                botafogo++;
                break;
            case 'n':
                fluminense++;
                break;
            case 'o':
                outros++;
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while (time != 'r');

    entrevistados = flamengo + vasco + fluminense + botafogo + outros;


    printf("%d pessoas foram entrevistadas\n", entrevistados);
    printf("%d eram flamengo\n", flamengo);
    printf("%d eram fluminense\n", fluminense);
    printf("%d eram botafogo\n", botafogo);
    printf("%d eram vasco\n", vasco);
    printf("%d era outro time\n", outros);
    printf("no total %.2f porcento sao torcedores do flamengo %.2f porcento sao do fluminense %f porcento sao do vasco %.2f porcento sao do botafogo %.2f porcento sao outros",
           (float) flamengo / entrevistados * 100, (float) fluminense / entrevistados * 100,
           (float) vasco / entrevistados * 100, (float) botafogo / entrevistados * 100,
           (float) outros / entrevistados * 100);
}
