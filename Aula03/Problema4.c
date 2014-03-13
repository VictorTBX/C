#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digete sua idade: ");
    scanf("%d",&idade);
    if (idade>18){
        if (idade>65){
            printf("Maior de 65 anos");
        }else{
            printf("Maior de Idade");
        }
    }else if (idade<=0){
        printf("Idade Invalida");
    }else{
        printf("Menor de Idade");
    }
    return 0;
}
