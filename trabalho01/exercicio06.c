#include <stdio.h>
#include <stdlib.h>

int percentual(int total, int intervalo){
    return ((intervalo*100)/total);
}

int main(){
    int simnao,conta=0;
    int contaSim=0, contaNao=0;
    int contaNaoHomem=0, ContaSimMulher=0,pessoa=2000;
    char sexo;

    do{
        printf("Pessoa %d...\n",pessoa);
        printf("Gostou do produto Sim[1] Nao[0]........: ");
        scanf("%d",&simnao);

        fflush(stdin);

        printf("Informe seu sexo Mulheres[m] Homem[h]..: ");
        scanf("%c",&sexo);
        printf("\n");

        // pega somente valores validos
        if (!((simnao==1 || simnao==0) && ((sexo=='m' || sexo=='h') || (sexo=='M' || sexo=='H')))){
            printf("\nOpcao invalida...\nFim de execucao!!!\n");
            return 0;
        }else{
            if (simnao){
                contaSim++;
                ContaSimMulher=(sexo=='M' || sexo=='m') ? ContaSimMulher+1 : ContaSimMulher+0;
            }else{
                contaNao++;
                contaNaoHomem=(sexo=='H' || sexo=='h') ? contaNaoHomem+1 : contaNaoHomem+0;
            }
            conta++;
            pessoa--;
        }
    }while(pessoa!=0);
    printf("\nO numero de pessoas que responderam sim: %d\n" ,contaSim);
    printf("\nO numero de pessoas que responderam nao: %d\n" ,contaNao);

    printf("\n%d%% das pessoas do sexo feminino que responderam sim\n",percentual(conta,ContaSimMulher));
    printf("\n%d%% das pessoas do sexo masculino que responderam nao\n",percentual(conta,contaNaoHomem));
    return 0;
}
