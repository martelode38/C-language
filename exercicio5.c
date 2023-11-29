
#include <stdio.h>

int horasJogadas(int h1, int m1, int h2, int m2){


    int horas, minutos;

    if(h1 < h2 && m1 < m2){

        horas = h2-h1;
        minutos = m2 - m1;


    }if(h2 < h1){

        horas = 24 + (h2-h1);

        if(m1 > m2){
            minutos = 60 - (m1 - m2);
        }else{

            minutos = m2 - m1;

        }
    }if(h1 < h2){
        horas = h2 - h1;

        if(m1 > m2){
            minutos = 60 - (m1 - m2);
        }else{

            minutos = m2 - m1;

        }

    }

    printf("%d:%d horas jogadas\n", horas, minutos);
    return 0;

}


int main()
{
    horasJogadas(16,30,12,50);
    horasJogadas(12,30,16,50);
    horasJogadas(12,50,18,30);
    horasJogadas(16,30,12,50);
    return 0;
}
