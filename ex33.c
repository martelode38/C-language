#include <stdio.h>
// marcos martenier santos oliveira
void main()
{

    float primeiraPessoa,segundaPessoa;

    printf("insira as alturas das pessoas");
    scanf("%d%d",&primeiraPessoa, &segundaPessoa);

    if(primeiraPessoa > segundaPessoa)
        printf("a primeira pessoa é pesada");

    else printf("a segunda pessoa é pesada");

}
