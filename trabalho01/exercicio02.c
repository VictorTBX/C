#include <stdio.h>
#include <stdlib.h>

int main(){
    int codProd,qntCompr;
    double vlUni;

    printf("Codigo do produto: ");
    scanf("%d",&codProd);

    printf("Quantos Comprou..: ");
    scanf("%d",&qntCompr);

    switch(codProd){
    case 1001:
        vlUni=5.32;
        break;
    case 1324:
        vlUni=6.45;
        break;
    case 6548:
        vlUni=2.37;
        break;
    case 987:
        vlUni=5.32;
        break;
    case 7623:
        vlUni=6.45;
        break;
    default:
        printf("\nOpcao invalida!\n");
        return 0;
        break;
    }

    printf("\nValor Total R$ %.2lf\n",qntCompr*vlUni);
    return 0;
}
