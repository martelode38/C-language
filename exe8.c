#include <stdio.h>
// marcos martenier santos oliveira
int main()
{

    int n1, n2, n3;
    int indexMaior, indexMenor, indexMedio;

    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3)
    {
        indexMaior = n1;
        if(n2 > n3)
        {
            indexMedio = n2;
            indexMenor = n3;
        }else{
            indexMedio = n3;
            indexMenor = n2;

        }


    }else if(n2 > n1 && n2 > n3)
    {
        indexMedio = n2;
        if(n1 > n3)
        {
            indexMedio = n1;
            indexMenor = n3;
        }else{
            indexMedio = n3;
            indexMenor = n1;

        }


    }else if(n3 > n2 && n3 > n1)
    {
        indexMenor = n3;

        if(n1 > n2)
        {
            indexMedio = n1;
            indexMenor = n2;
        }else{
            indexMedio = n2;
            indexMenor = n1;

        }

    }

    printf("%d %d %d",indexMenor,indexMedio,indexMaior);


}