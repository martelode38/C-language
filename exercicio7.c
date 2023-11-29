#include  <stdio.h>

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

    if(pulsos > 90){
        pulsoIndex = pulsos - 90;

    }else{
        pulsoIndex = 0;
    }

    conta = 21.40 + (0.03* pulsoIndex) + (0.40*inteurbanos) + (0.40*celular);

    printf(" sua conta foi  de %.2f", conta);


}