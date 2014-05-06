#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5], soma=0.0;
    int i;
    float *ptr;
    ptr = notas;
    for (i=0; i<5; i++){
        printf("Digite a %d nota do aluno:",(i+1));
        scanf("%f",ptr);
        if (*ptr >0)
            soma += *ptr;
        ptr++;
    }
    printf("Media do aluno = %.2f",soma/5);
}
