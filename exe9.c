#include <stdio.h>
//marcos martenier santos oliveira
void main()
{
    float altura = 0, peso = 0, imc = 0;
    printf("insira sua altura e peso\n");
    scanf("%f%f",&altura,&peso);

    imc = peso/(altura *altura);

    if(imc < 18.49){
        printf("abaixo do peso");
    }else if(imc >= 18.50 && imc <= 24.99){
        printf("peso normal");
    }
    else{
        printf("acima do peso");
    }
}