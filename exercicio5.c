#include <stdio.h>

void main()
{
    float n1 = 0, n2 = 0, nota_final = 0;

    scanf("%f%f", &n1,&n2);

    if(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10){
        printf("insira notas validas de 0 a 10.");
    }else{


        nota_final = ((n1*2)+(n2*3))/5;

        printf("%.2f", nota_final);

    }



}