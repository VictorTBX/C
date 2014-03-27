#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    char opc;
    double valor;

    printf("Informe o Codigo (A/B/C/D): ");
    scanf("%c",&opc);

    printf("Digite o Tamanho em Acre: ");
    scanf("%d",&tamanho);

    switch(opc){
    case 'A':
        if (tamanho > 1000)
            valor=((tamanho*10)-(((tamanho*10)*0.05)));
        else
            valor=(tamanho*10);

        if(valor>25000)
            valor=(valor-(valor*0.10));
        printf("\nValor da pulverizacao para daninhas R$ %.2lf Ervas \n",valor);
        break;
    case 'B':
        if (tamanho > 1000)
            valor=((tamanho*20)-(((tamanho*20)*0.05)));
        else
            valor=(tamanho*20);

        if(valor>25000)
            valor=(valor-(valor*0.10));
        printf("\nValor da pulverizacao Gafanhotos R$ %.2lf \n",valor);
        break;
    case 'C':
        if (tamanho > 1000)
            valor=((tamanho*30)-(((tamanho*30)*0.05)));
        else
            valor=(tamanho*30);

        if(valor>25000)
            valor=(valor-(valor*0.10));
        printf("\nValor da pulverizacao para Brocas R$ %.2lf \n",valor);
        break;
    case 'D':
        if (tamanho > 1000)
            valor=((tamanho*25)-(((tamanho*25)*0.05)));
        else
            valor=(tamanho*25);

        if(valor>25000)
            valor=(valor-(valor*0.10));
        printf("\nCompleta R$ %.2lf\n",valor);
        break;
    default:
        printf("\nOpcao invalida!");
        break;
    }
    return 0;
}
