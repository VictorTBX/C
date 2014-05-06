#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    int vet[10];
    int valor;
    int soma=0,media;
    while (i<10){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
        soma=soma+vet[i];
        i++;
    }
    media=soma/10;
    return 0;
}
