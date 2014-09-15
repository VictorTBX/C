#include <conio.h>
#include <stdio.h>
void main(){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};       //seta  um vetor de cinco e atribui valores
    float *f;                                   //seta um poteiro
    int i;                                      //seta uma variavel do tipo inteiro para segurar o for
    f = vet;                                    //seta o ponteiro f apontando para o vetor
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);                   //imprime o contador i
        printf(" vet[%d] = %.1f",i, vet[i]);    //imprime o vetor na posicao de i
        printf(" *(f + %d) = %.1f",i, *(f+i));  //imprime o conteudo do ponteiro f na posicao de i
        printf(" &vet[%d] = %X",i, &vet[i]);    //imprime o endereço de memoria do vetor na posicao de i
        printf(" (f + %d) = %X",i, f+i);        //imprime o endereço de memoria do ponteiro f que aponta para o vetor na posicao de i
    }
}
