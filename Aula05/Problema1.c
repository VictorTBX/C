#include <stdio.h>
#include <stdlib.h>

int main()
{
    char simnao='s';
    int conta=0;
    int acumula=0;
    int num;

    do{
        printf("Digite um numero:");
        scanf("%d",&num);
        acumula=acumula+num;
        conta++;
    }while(num!=0);
    float re=(acumula/(conta-1));
    printf("Media dos numeros digitados: %.2f",re);
    return 0;
}
