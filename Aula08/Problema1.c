#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado(int *x);

int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d",&a);
    quadrado(&a);
    printf("\nNumero elevado ao quadrado %d\n",a);
    return 0;
}
void quadrado(int *x){
    *x=(*x)*(*x);
}
