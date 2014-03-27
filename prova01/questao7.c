#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo,vlMedia;
    printf("Tempo Gasto......:");
    scanf("%d",&tempo);

    printf("Velocidade Media.:");
    scanf("%d",&vlMedia);

    int distancia = (tempo*vlMedia);
    int litro = (distancia/18);

    printf("\nVelocidade media %d\nDistancia percorrida %d\nLitros utilizados %d\n",vlMedia,distancia,litro);


    return 0;
}
