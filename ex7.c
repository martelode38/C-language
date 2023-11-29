#include <math.h>
#include <stdio.h>

int main()
{
    int x = 5;
    int resultado =  0;

//    scanf("%d", &x);

    for(int i = 0; i <= 9; i++){

                resultado = pow(x,i);

        printf("%d\n", resultado);

    }



    return 0;
}
