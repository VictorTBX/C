#include <stdio.h>
#include <stdlib.h>

// desafio
int main()
{
    int entrahora,entramim,saidahora,saidamim,quantHora,quantMin;

    printf("Digite a hora de entrada: ");
    scanf("%d", &entrahora);

    printf("Digite a minuto entrada: ");
    scanf("%d", &entramim);

    printf("Digite a hora de Saida: ");
    scanf("%d", &saidahora);

    printf("Digite a minuto Saida: ");
    scanf("%d", &saidamim);

    quantHora=(((saidahora+24)-entrahora)%24);
    quantMin=(((saidamim+60)-entramim)%60);


    printf("Quantidade Hora: %d Minuto: %d\n",quantHora,quantMin);

    return 0;
}

