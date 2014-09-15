#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    float *pNumero;

    pNumero=&numero;

    printf("Digite um numero: ");
    scanf("%f",pNumero);

    printf("\n Valor armazenado numero %f",numero);
    return 0;
}
