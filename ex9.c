#include <stdio.h>

int main() {

    int n1,n2,n3,n4,n5, maior;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);

    maior = n1;
    if(maior < n2){
        maior = n2;
    }else if(maior < n3){
        maior = n3;
    }else if(maior < n4){
        maior = n4;
    }else if( maior < n5){
        maior = n5;
    }

    printf("%d", maior);
}
