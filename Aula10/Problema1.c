#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10];
    int i;
    for (i=0;i<10;i++){
        printf("Digite a idade: ");
        scanf("%d",(vet+i));
    }
    for (i=0;i<10;i++){
        printf("\nVetor [%d]=%d => end  %u",i,*(vet+i),(vet+i));
    }
    return 0;
}

