#include <stdio.h>
#include <math.h>
//marcos martenier santos oliveira
void bskr(float a, float b, float c) {

    float x1 = 0, x2 = 0;
    float delta;
    delta = (b * b) - 4 * a * c;


    if(a == 0){

        printf("a nao pode ser 0");
        return;

    }else if( delta < 0){
        printf("o delta nao pode ser negativo");
        return;

    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("%f\n%f", x1, x2);


    }




}

int main()
{
    bskr(1,0,0);

    return 0;
}
