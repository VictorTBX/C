#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int in1,in2;

    printf("Digite o primeiro inteiro:");
    scanf("%d",&in1);
    printf("Digite o segundo inteiro.:");
    scanf("%d",&in2);

    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\n",(in1+in2),(in1-in2),(in1*in2));
    printf("\nPrimeiro numero\n\nRaiz Quadrada: %.2f\nRaiz cubica: %.2f\nResto da divisao: %d\n",(sqrt(in1)),(cbrt(in1)),(in1%2));
    printf("\nSegundo numero\n\nRaiz Quadrada: %.2f\nRaiz cubica: %.2f\nResto da divisao: %d\n",(sqrt(in2)),(cbrt(in2)),(in2%2));
    return 0;
}
