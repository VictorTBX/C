#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salBruto,resultado,prestacao;
    printf("Digite seu salario Bruto: ");
    scanf("%f",&salBruto);

    printf("Prestacao: ");
    scanf("%f",&prestacao);

    resultado=(salBruto-(salBruto*0.30));
    printf("Resultado: %.2f \n",(resultado));

    if (prestacao > resultado)
        printf("Prestacao maior 30 porcento, concedido\n");
    else
        printf("Prestacao menor 30 porcento, não concedider\n");
    return 0;
}
