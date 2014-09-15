#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B;
    int *X,*Y;

    printf("digite dois numeros: ");
    scanf("%d %d",&A,&B);

    X=&A;
    Y=&B;

    X=Y;

    if(*X==*Y)
        printf("\nconteudo Igual");
    else
        printf("\nconteudo nao certo ");

    if(X==Y)
        printf("\nEndereco Igual");
    else
        printf("\nEndereco nao certo");


    return 0;
}
