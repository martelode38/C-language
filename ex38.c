#include <stdio.h>

int matriz(void) {

int linha, coluna;
  char carac;

printf("digite o numero de linhas colunas e um char");
  scanf("%d%d %c", &linha,&coluna, &carac);
  

  for(int i = 0; i < linha; i++)
    {
      for(int k = 0; k < coluna; k++){
        printf("%c", carac);
      }
      printf("\n");
    }
}


void piramide(){



for(int i = 0; i < 20; i++){
    for(int k = 24; k > i ; k= k-2){
     printf(" ");
     
   }
   for(int j = 0; j < i -1; j++){
 
    printf("x");
    
    
   }
  printf("\n");
  i = i + 1;
  
}
}

int escadinha(){

  char letra;
  int n = 0;
printf("digite uma letra e um numero maior q 0");
  scanf(" %c", &letra);
    scanf("%d", &n);

for(int i = 1; i <= n; i++){
  
   for(int j = 1; j <= i; j++){
   
    printf("%c%c", letra, letra);
    
    
   }
  printf("\n");
}


}





int main()
{

int op;


do{
    
    printf("digite 1 para escadinha 2 para piramide e 3 para matriz e 0 para sair: \n ");
    scanf("%d", &op);
    
    
    switch(op){
        case 1: escadinha();
        break;
        
        case 2: piramide();
        break;
        
        case 3: matriz();
        break;
        
        case 0: printf("tchau!");
        break;
        
        default:
        printf("valor invalido\n");
    }
    
}while(op!=0);

}
