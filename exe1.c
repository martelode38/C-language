#include <stdio.h>
//marcos martenier santos oliveira
void main(){

    float n1 = 0, n2 = 0, resultado = 0;
    int index = 0;

    printf("Calculadora em c\n\ndigite 1 para somar n1 e n2:\ndigite 2 para subtrair n1 por n2:\ndigite 3 para dividir n1 por n2:\ndigite 4 para multiplicar n1 e n2:\n\n >");
    scanf("%d", &index);


    printf("digita n1 e n2\n\n>");
    scanf("%f%f", &n1,&n2);



    if(index == 1){

        resultado = n1 + n2;

        printf("%2.f", resultado);
    } else if(index == 2){

        resultado = n1 - n2;

        printf("%2.f", resultado);
    } else if(index == 3){

        resultado = n1 / n2;

        printf("%2.f", resultado);
    } else if(index == 4){

        resultado = n1 * n2;

        printf("%2.f", resultado);
    }
}