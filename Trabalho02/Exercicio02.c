#include <stdio.h>
#include <stdlib.h>
#define TAM 30

void setaAeB(int tamA,int tamB, int total,int *x);

int main(){
    int vet[TAM],i;
    int contaA=0,contaB=0;
    for(i=0;i<TAM;i++){
        printf("Digite valor para a posicao %d: ",(i+1));
        scanf("%d",&vet[i]);
        if (vet[i]>0) // separa
            contaA++;
        else
            contaB++;
    }
    setaAeB(contaA,contaB,TAM,vet);
    return 0;
}

void setaAeB(int tamA,int tamB, int total,int *x){
    int i,j;
    int A[tamA];
    int B[tamB];
    int seguraA=0,seguraB=0;

    for(i=0;i<total;i++){ // arruma o vetor A e B
        if (*(x+i)>0){
            A[seguraA]=*(x+i);
            seguraA++;
        }else{
            B[seguraB]=*(x+i);
            seguraB++;
        }
    }
    printf("\nA%c%d%c %c %c",91,tamA,93,242,123);
    int fim=(tamA-1);
    for(j=0;j<tamA;j++){ // imprime A
        printf("%d",A[j]);
        printf("%c\n",(fim!=j)?44:125);
    }

    printf("\nB%c%d%c %c %c\n",91,tamB,93,242,123);
    int fimm=(tamB-1);
    for(j=0;j<tamB;j++){ // imprime B
        printf("%d",B[j]);
        printf("%c",(fimm!=j)?44:125);
    }
}
