#include <stdio.h>
//marcos martenier santos oliveira
int calcVolume(float raio) {
    float volume;
    volume = 1.33*3.14*((raio*raio)*raio);
    printf("%f",volume);
    return 0;
}

void main(){
    calcVolume(2);
}
