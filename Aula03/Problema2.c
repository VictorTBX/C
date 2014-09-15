#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float valProdut;
    printf("Digite o valor do Produto: ");
    scanf("%f",&valProdut);
    if (valProdut<20)
        printf("Valor do produto: R$ %.2f",(valProdut+(valProdut*0.45)));
    else
        printf("Valor do produto: R$ %.2f",(valProdut+(valProdut*0.30)));
    return 0;
}
