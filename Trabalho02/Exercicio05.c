#include <stdio.h>
#include <stdlib.h>
#define TAM 10

// DANILO PEREIRA DOS SANTOS - 20209928

void montaC(int *vetA,int *vetB,int *vetC,int total);
void bubble(int *v, int qtd);

int main() {
    int i,w;
    int A[TAM];
    int B[TAM];
    int tota=(TAM+TAM);
    int C[tota];
    printf("\nA entrada deve ser A espaco B\n\n");
    for(i=0; i<TAM; i++) {
        printf("Digite valores para A e B [%d]: ", (i+1));
        scanf("%d %d", &A[i], &B[i]);
    }
    printf("\nA[%d]=%c",TAM,123);
    int fimm=TAM-1;
    for(w=0; w<TAM; w++) {
        printf("%d",*(A+w));
        printf("%c",(fimm!=w)?44:125);
    }

    printf("\nB[%d]=%c",TAM,123);
    for(w=0; w<TAM; w++) {
        printf("%d",*(B+w));
        printf("%c",(fimm!=w)?44:125);
    }

    montaC(A,B,C,tota);
    bubble(C,tota);

    printf("\nC[%d]=%c",tota,123);
    int fimmm=tota-1;
    for(w=0; w<tota; w++) {
        printf("%d",*(C+w));
        printf("%c",(fimmm!=w)?44:125);
    }
    printf("\n");
    return 0;
}
void bubble(int *v, int qtd) {
    int i;
    int j;
    int aux;
    int k=qtd-1;

    for(i=0; i<qtd; i++) {
        for(j=0; j<k; j++) {
            if(*(v+j) < *(v+(j+1))) {
                aux=*(v+j);
                *(v+j)=*(v+(j+1));
                *(v+(j+1))=aux;
            }
        }
        k--;
    }
}
void montaC(int *vetA,int *vetB,int *vetC,int total) {
    int i,j=0;
    for(i=0; i<total; i++) {
        if (i<10) {
            *(vetC+i)=*(vetA+i);
        } else {
            *(vetC+i)=*(vetB+j);
            j++;
        }
    }
}
