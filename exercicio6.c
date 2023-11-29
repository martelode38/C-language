#include <stdio.h>

void main(){

    float divMarido, divEsposa;
    float divTotal;
    float devendo1;
    float devendo2;

    printf("digite a divida do marido e a divida da esposa");
    scanf("%f%f", &divMarido, &divEsposa);

    divTotal = (divEsposa + divMarido)/2;


    devendo1 = divTotal - divMarido;
    devendo2 = divTotal - divEsposa;

    printf("o saldo do marido é de %.2f e o da esposa %.2f", devendo1, devendo2);



}