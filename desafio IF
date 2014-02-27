#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int b1 = 0, b5 = 0, b10 = 0, b50 = 0, aux = 0;

    printf("Bem Vindo ao Banco das Ilhas Weblands.\n");
    printf("Por favor, informe o valor que deseja sacar:\n");
    scanf("%f", &valor);

    if (valor >= 50) {
        aux = valor / 50;
        b50 = aux;
        valor = valor - (50*b50);
    }

    if (valor >= 10) {
        aux = valor / 10;
        b10 = aux;
        valor = valor - (10*b10);
    }

    if (valor >= 5) {
        aux = valor / 5;
        b5 = aux;
        valor = valor - (5*b5);
    }

    if (valor >= 1) {
        aux = valor / 1;
        b1 = aux;
        valor = valor - (10*b1);
    }

    printf("*** IMPRIMINDO %d x BS1,00 , %d x BS5,00 , %d x BS10,00 , %d x BS50,00 ***\n", b1, b5, b10, b50);

    return 0;
}
