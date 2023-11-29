
#include <stdio.h>


void main()
{
    float r1 = 0;
    float r2 = 0;
    float r = 0;



    do{
        scanf("%f", &r1);
        scanf("%f", &r2);

        if(r1 == 0 || r2 == 0){
            break;
        }
        r=r1*r2/(r1+r2);

        printf("%f\n", r);


    }while(1);


}
