#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 12

void consisteTemp(double *temps, int total);

int main(){
    int i=0;
    double temp[TAM];
    char meses[TAM][10] = {"Janeiro..","Fevereiro","Marco....","Abril....","Maio.....","Junho....","Julho....","Agosto...","Setembro.","Outubro..","Novembro.","Dezembro."};
    do{
        printf("\nDigite a temperatura em %s: ",meses[i]);
        scanf("%lf",&temp[i]);
        i++;
    }while(i<TAM);
    consisteTemp(temp,TAM);
    return 0;
}

void consisteTemp(double *temps, int total){
    char mes [TAM][10] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    double menorTemp=*(temps+1), maiorTemp=0.00;
    int posicaoMesMenor=0,posicaoMesMaior=0,i;
    for (i=0; i<total; i++){
        if (menorTemp>=*(temps+i)){  // pega menor temperatura
            menorTemp=*(temps+i);
            posicaoMesMenor=i;
        }

        if (maiorTemp<=*(temps+i)){ // Guardar maior temperatura
            maiorTemp=*(temps+i);
            posicaoMesMaior=i;
        }
    }
    printf("\nMaior temperatura %.1lf %cC em %s ",maiorTemp,248,mes[posicaoMesMaior]);
    printf("\nMenor temperatura %.1lf %cC em %s \n",menorTemp,248,mes[posicaoMesMenor]);
}


