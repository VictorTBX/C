#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contaH=0;
    int sobrePeso=0;
    double media=0;
    double altura,peso,somaAl;
    char sexo;
    int i;
    for(i=0; i<3; i++){

        printf("Altura: ");
        scanf("%lf",&altura);
        fflush(stdin);

        printf("\nPeso: ");
        scanf("%lf",&peso);
        fflush(stdin);

        printf("\nDigete [M] para mulher e [H] para homem: ");
        scanf("%c",&sexo);
        fflush(stdin);

        if(sexo=='H' || sexo=='h')
            contaH++;

        if(sexo=='M' || sexo=='m')
            somaAl=somaAl+altura;

        if(peso>90 && altura>15)
            sobrePeso++;

        fflush(stdin);
    }
    printf("\nQuantos homem = %d",contaH);
    printf("\nQuantos obesos = %d",sobrePeso);
    printf("\nMedia Altura mulher = %d",somaAl/(10-contaH));
    return 0;
}
