#include <stdio.h>
#include <stdlib.h>

int desconto(int vlProd , double vlDesco)
{
    return vlProd-(vlProd*(vlDesco/100));
}

int main()
{
    int vlProdu;
    int descont=10;
    printf("Valor do produto: ");
    scanf("%d",&vlProdu);
    int result=desconto(vlProdu,descont);
    printf("Valor do novo produto : R$ %d com 10%% de desconto",result);
    return 0;
}
