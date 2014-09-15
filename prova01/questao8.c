#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int peso;
    float altura;
    int IMC;

    printf("Digite seu peso...: ");
    scanf("%d",&peso);

    printf("Digite sea altura.: ");
    scanf("%f",&altura);

    IMC=(peso/(pow(altura,2)));

    if (IMC>40){
        printf("\nObeso morbido\n");
    }else if(IMC>30){
        printf("\nObeso\n");
    }else if(IMC>25){
        printf("\nSobre Peso\n");
    }else if(IMC>20){
        printf("\nPeso normal\n");
    }else{
        printf("\nAbaixo do peso\n");
    }
    return 0;
}
