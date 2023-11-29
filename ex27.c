#include  <stdio.h>
//MARCOS MARTENIER SANTOS OLIVEIRA
void main(){

    int pulsos, inteurbanos, celular;
    int pulsoIndex;
    float conta;
    printf("digite os pulsos");
    scanf("%d",&pulsos);
    printf("digite as chamadas inteurbanas");
    scanf("%d",&inteurbanos);
    printf("digite as chamamas para celular");
    scanf("%d",&celular);

    conta = 21.40 + (0.03* (pulsoIndex-90)) + (0.40*inteurbanos) + (0.40*celular);

    printf(" sua conta foi  de %.2f", conta);


}
