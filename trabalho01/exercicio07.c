#include <stdio.h>
#include <stdlib.h>

int verificaPositivo(int vl){
    return vl<0 ? 0 : 1;
}

int main(){
    int N=0,teste=1,primeiro=0;
    do{
        scanf("%d",&N);
        if(verificaPositivo(N) && N<=10000){
            int i=0,J=0,I=0,maiorSaldo=0;
            while(N!=i){
                int X=0,Y=0,saldo=0;
                scanf("%d %d",&X, &Y);
                if ((X<=50 && verificaPositivo(X)) && (Y<=50 && verificaPositivo(Y))){
                    saldo=X-Y;
                    if((verificaPositivo(saldo)) && (saldo!=0) && (maiorSaldo<=saldo)){
                        maiorSaldo=saldo;
                        J=(i+1);    // pega a ultima
                        I=I+1;      // pega a primeira
                        if (I==1)
                            primeiro=J;
                    }
                    i++;
                }else{
                    printf("Valores invalidos para X e Y \n");
                    return 0;
                }
            }
            if(N!=0){
                if (J!=0)
                    printf("\nTeste %d\n%d %d\n",teste,primeiro,J);
                else
                    printf("\nTeste %d\nNenhum\n",teste);

                teste++;
            }
        }else{
            printf("Valor invalido para o N \n");
            return 0;
        }
    }while(N!=0);
    return 0;
}
