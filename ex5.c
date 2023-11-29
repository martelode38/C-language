#include <stdio.h>

void main(){

  int index;

  printf("coloque um numero de 1 a 200:\n>");
  scanf("%d", &index);

  for(int i = 0; i <= index; i++){

    if(i %4 == 0 && i > 0){
        printf("%d ", i);
      
    }
  }

}
