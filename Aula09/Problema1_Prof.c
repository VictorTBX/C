#include <stdio.h>
#include <stdlib.h>

int achou(int *p, int n, int posicao);

int main()
{
    int vetor[5];
    int i=0, j, numero;

    printf("\nDigite o elemento da posiciao %d:", i);
    scanf("%d", &numero);

    vetor[i]=numero;

    i++;

    while(i<5)
    {

     printf("\nDigite o elemento da posiciao %d:", i);
     scanf("%d", &numero);

      if(achou(vetor,numero,i) != 1)
      {
        vetor[i]=numero;
        i++;
      }
    }

   for(j=0; j<i; j++)
   {
    printf("\nValor da posicao %d do vetor: %d", j, vetor[j]);
   }


    return 0;
}


int achou(int *p ,int n, int posicao)
{
    int k;

    for(k=0; k<posicao; k++)
    {
       if(*p == n)
            return 1;
       else
         p++;
    }

    return 0;

}
