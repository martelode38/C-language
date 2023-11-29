#include <stdio.h>
// marcos martenier santos oliveira

void main()
{

    int a,b,c,d;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a == b && a == c && a == d){
        printf("e um quadrado");
    }else{
        printf("nao e um quadrado");
    }
}