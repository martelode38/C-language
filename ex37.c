#include <stdio.h>
// marcos martenier santos oliveira
void main(){

    printf("digite sua idade para saber se voce pode doar sangue:");

    int idade;

    scanf("%d",&idade);

    if(idade < 16){
        printf("ainda nao pode doar");
    }else{
        printf("pode doar");
    }
}
