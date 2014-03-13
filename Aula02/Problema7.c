#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double quantMini,quantQuilo,conta;
    double avos;
    printf("\nSalario minimo: ");
    scanf("%lf",&quantMini);

    printf("\nQuantidade de Quilowatts: ");
    scanf("%lf",&quantQuilo);

    conta=(quantMini*quantQuilo);
    avos=(quantQuilo*(1/500));

    fflush(stdin);

    printf("\nO valor em reais de cada Quilowatt e %lf",avos);
    printf("\nO valor em reais a ser pago por essa residenci %lf",conta);
    printf("\nO valor com desconto %lf\n",(conta-(conta*0.15)));
    return 0;
}
