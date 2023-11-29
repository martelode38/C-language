#include <stdio.h>
void main(){

    int x = 0;
    int soma = 0;

    scanf("%d", &x);


    for(int i = 1; i <= x; i++){

        soma = soma + i;
    }
    printf("%d", soma);
}
