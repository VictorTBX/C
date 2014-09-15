#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void inverte(int *vet1, int *vet2, int tam);

int main(){
   int vetA[TAM];
   int vetB[TAM];
   int i;

   for(i=0; i<TAM; i++){
    printf("\nDigite valor da posicao %d:", i);
    scanf("%d", &vetA[i]);
   }

   inverte(vetA, vetB, TAM);

   printf("\nImpressao do vetor B:");

   for(i=0; i<TAM; i++){
    printf("\n vet[%d]=%d", i, vetB[i]);
   }
    return 0;
}

void inverte(int *vet1, int *vet2, int tam){
 int i;

 for(i=0; i<10; i++){
   *(vet2+(9-i)) = *(vet1+i);
 }
}
