#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int percentual(int total, int intervalo){
    return ((intervalo*100)/total);
}
int main(){
    double contaSalario=0,contaFilhos=0,maiorSalario=0;
    double salario;
    int contaSalario100=0,contador=0;
    int filho;

    do{
        printf("Habitante %d\n",(contador+1));
        printf("Informe o Salario...: ");
        scanf("%lf",&salario);

        printf("Quantidade de filhos: ");
        scanf("%d",&filho);

        if(salario>0){                      // pega somente valores positivos
            contaSalario=contaSalario+salario;
            contaFilhos=contaFilhos+filho;
            if (salario<=100.00){
                contaSalario100++;
            }
            if (maiorSalario<salario)
                maiorSalario=salario;

            contador++;
        }
        fflush(stdin);
        printf("\n");
    }while(salario>0);

    printf("\n");
    printf("Media do Salario da Populacao.............. R$ %.2lf\n",(contaSalario/contador));
    printf("\nMedia do Numero de filhos da Populacao..... %.lf\n",(contaFilhos/contador));
    printf("\nMaior salario.............................. R$ %.2lf\n",maiorSalario);
    printf("\nPercentual com salario ate R$100,00 eh %d%%\n",percentual(contador,contaSalario100));

    return 0;
}
