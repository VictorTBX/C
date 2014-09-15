#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int peso,newpeso;
    double ganho,diferenca;

    printf("Peso atual:");
    scanf("%d",&peso);

    printf("Novo peso:");
    scanf("%d",&newpeso);

    //fflush(stdin);
    diferenca=(newpeso-peso);
    ganho=(peso*0.12);
    if(diferenca>=ganho)
    {
        printf("Ganho %.2f doze porcento a mais seu peso\n",diferenca);
    }
    else
    {
        printf("Ganho %.2f \n",diferenca);
    }
    return 0;
}
