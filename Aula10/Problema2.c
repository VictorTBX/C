#include <stdio.h>
#include <stdlib.h>
#define TAMANAHO=100

int main(){
    void contar (int *x, int tam);
    int vet[9];
    int i;
    for (i=0; i<9; i++){
        printf("Digite um numero: ");
        scanf("%d",(vet+i));
    }
    contar (vet, 9);
    return 0;
}
void contar(int *x, int tam){
    int t;
    int acumula=0;
    printf("Valores ");
    for (t=0; t<tam; t++){
        if (*x>=1 && *x<=9){
            printf("%d",*x);
            acumula++;
        }
        *x++;
    }
    printf("total %d \n",acumula);
}
