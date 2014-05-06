#include <stdio.h>
#include <stdlib.h>
#define TAMANAHO 100

int main(){
    void inverte(int *vet1, int *vet2, int tam);
    int tamanho,i;
    printf("digete o tamanho do vetor: ");
    scanf("%d",&tamanho);
    int vetA[tamanho];
    int vetB[tamanho];

    for (i=0; i<tamanho; i++){
        printf("Digite um numero: ");
        scanf("%d",(vetA+i));
    }
    inverte(vetA,vetB,tamanho);
    return 0;
}
void inverte(int *vet1, int *vet2, int tam){
    int j;
    for (j=0; j<tam; j++){
        printf("%d\n",*(vet1+j));
    }
}
