#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,metatde,acumula;
    int conta=1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    metatde=(num/2);

    while(conta <=metatde){
        if (num%conta==0)
            acumula=conta+conta;
        conta++;
    }
    if (acumula==num){
        printf("Eh quadrado perfeito %d\n",acumula);
    }else{
        printf("%d nao eh quadrado perfeito",num);
    }
    return 0;
}
