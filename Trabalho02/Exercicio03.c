#include <stdio.h>
#include <stdlib.h>
#define TAM 15

double calcMedia(double *sal,int total); // calcula a media dos salarios
int verifMaior(int *vetor,int total); // devolve a maior idade
int verifMenor(int *vetor,int total); // devolve a menor idade
int mulher(int *vetorFilhos,double *sal,char *opcao,int total); // devolve a quantas mulheres com 3 filhs receberam até R$ 500
int validaSexp(char opc); // valida o sexo digitado
int validaPositivo(int num); // verifica se o numero e positivo
double validaSal(double sala); // valida salario maior que zero

int main(){

    double salario[TAM];
    char sexo[TAM];
    int i=0;
    int idade[TAM],nFilhos[TAM];

    do{
        printf("\nHabitante %d\n",(i+1));
        printf(".Idade...........: ");
        scanf("%d",&idade[i]);
        if (validaPositivo(idade[i])){
            printf("\nSomente valores positivos!!!\n");
            return 0;
        }

        fflush(stdin);
        printf(".Sexo............: ");
        scanf("%c",&sexo[i]);
        if(validaSexp(sexo[i])){
            printf("\n\nUtilize 'H' ou 'h' para homens %c\nE 'M' ou 'm' para mulheres %c\n\n",11,12);
            return 0;
        }

        printf(".Salario.........: ");
        scanf("%lf",&salario[i]);
        if(validaSal(salario[i])){
            printf("\nSomente valores positivos!!!\n");
            return 0;
        }

        printf(".Numero de filhos: ");
        scanf("%d",&nFilhos[i]);
        if(validaPositivo(nFilhos[i])){
            printf("\nSomente valores positivos!!!\n");
            return 0;
        }
        i++;
    }while(i!=TAM);
    printf("\n\nResultados:");
    printf("\nMedia dos salarios R$ %.2lf",calcMedia(salario,TAM));
    printf("\nMenor idade %d anos e a maior idade %d anos",verifMenor(idade,TAM), verifMaior(idade,TAM));
    printf("\nMulheres com tres filhos que receberam ate R$ 500,00 sao %d\n", mulher(nFilhos,salario,sexo,TAM));
    return 0;
}

double calcMedia(double *sal,int total){
    double soma=0;
    int i;
    for (i=0; i<total; i++){
        soma=soma+(*(sal+i));
    }
    return (soma/total);
}

int verifMaior(int *vetor,int total){
    int guardarMaior=0;
    int i;
    for (i=0; i<total; i++){
        if (guardarMaior<*(vetor+i))
            guardarMaior=*(vetor+i);
    }
    return guardarMaior;
}

int verifMenor(int *vetor,int total){
    int guardarMenor=(*(vetor+1)); // pega qualquer um pode ser zero também
    int i;
    for (i=0; i<total; i++){
        if (guardarMenor>*(vetor+i))
            guardarMenor=*(vetor+i);
    }
    return guardarMenor;
}

int mulher(int *vetorFilhos,double *sal,char *opcao,int total){
    int i,conta=0;
    for (i=0; i<total; i++){
        if ((*(vetorFilhos+i)==3)&&(*(sal+i)<= 500.00) && ((*(opcao+i)=='m')||(*(opcao+i)=='M')))
            conta++;
    }
    return conta;
}

int validaSexp(char opc){
    return (!((opc=='H' || opc=='h') || (opc=='M' || opc=='m'))) ? 1 : 0;
}

int validaPositivo(int num){
    return num > 0 ? 0 : 1;
}

double validaSal(double sala){
    return sala > 0 ? 0 : 1;
}
