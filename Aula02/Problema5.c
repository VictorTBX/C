#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor,salario,salarioLiq;
    int qtdHoras;
    float desconto;

    printf("\nDigite o total de horas: ");
    scanf("%d",&qtdHoras);

    printf("\nDigite o numero de aulas dadas no mes: ");
    scanf("%f",&valor);

    printf("\nDigite o valor de desconto: ");
    scanf("%f",&desconto);
    salario=(valor*qtdHoras);

    salarioLiq=salario-(salario*(desconto/100));
    printf("\nSalario= R$%.2f",salarioLiq);
    return 0;
}
