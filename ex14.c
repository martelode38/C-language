
#include <stdio.h>
void main(){

    int x,y;
    int resultado = 1;


    scanf("%d%d", &x,&y);


    for(int i = 0; i < y; i++){

        resultado *= x;


    }

    printf("%d", resultado);



}
