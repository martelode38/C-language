#include <stdio.h>

int main()
{
    int index;
    
    printf("digite um numero:\n");
    scanf("%d", &index);
    
    
    for(int i = 1; i <= 10; i++){
        
        printf("\n%d x %d = ", index, i);
        printf("%d\n", index*i);
    }
    
    

    return 0;
}
