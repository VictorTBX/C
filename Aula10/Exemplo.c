#include <stdio.h>
#include <stdlib.h>

int main(){//
    int vet[]= {15,8,21};
    int d;
    for (d=0; d<3; d++){
        printf("Endereco memoria %u Conteudo %d ou %u\n",&vet[d],*(vet+d),(vet+d));
    }
    return 0;
}
