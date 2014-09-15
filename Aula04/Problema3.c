#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta=1;
    do{
        float renda;
        int qntDepe;
        printf("Renda Mensal....%d..: ",conta);
        scanf("%f",&renda);
        printf("Quantos Dependentes: ");
        scanf("%d",&qntDepe);
        if (qntDepe>7){
            printf("Desconto de 20%% = R$ %.2f\n",(renda*0.20));
        }else if (qntDepe>5){
            printf("Desconto de 15%% = R$ %.2f\n",(renda*0.15));
        }else if(qntDepe>3){
            printf("Desconto de 10%% = R$ %.2f\n",(renda*0.10));
        }else if(qntDepe>2){
            printf("Desconto de 5%% = R$ %.2f\n",(renda*0.05));
        }else{
            printf("insento\n");
        }
        conta++;
        fflush(stdin);
    }while(conta!=10);
    return 0;
}
