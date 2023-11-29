/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float aritimetica(float nota1, float nota2, float nota3)
{

    float media;
    media = (nota1 + nota2 + nota3)/3;

    return media;
}

float ponderada(float nota1, float nota2, float nota3)
{
    float media;
    media = ((nota1*5) + (nota2*3) + (nota3*2))/9;

    return media;
}

float harmonica(float nota1, float nota2, float nota3){

    float mediaHarmonica =0;
    mediaHarmonica = 3/((1/nota1)+(1/nota2)+(1/nota3));

    return mediaHarmonica;

}


int main()
{
    char letra;
    int x, y, z;

    scanf("%d%d%d %c",&x,&y,&z,&letra);

    if(letra == 'a'){

        printf("%f",aritimetica(x,y,z));
    }else if(letra == 'p'){
        printf("%f",ponderada(x,y,z));
    }else if(letra == 'h'){
        printf("%f",harmonica(x,y,z));
    }
}