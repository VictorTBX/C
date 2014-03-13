#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contaPessoa=0;
    int contaMaiorC=0;
    int contaDezVin=0;
    int contaPeso40=0;
    double acumulaAltura=0;
    do{
        int idade;
        double altura,peso;
        printf("Digite a idade.: ");
        scanf("%d",&idade);

        printf("Digite a altura: ");
        scanf("%lf",&altura);

        printf("Digite a peso..: ");
        scanf("%lf",&peso);

        if (idade>50){
            contaMaiorC++;
        }
        if (idade>10 && idade<20){
            acumulaAltura=altura+altura;
            contaDezVin++;
        }
        if(peso<40){
            contaPeso40++;
        }
        fflush(stdin);
        printf("\n");
        contaPessoa++;

    }while(contaPessoa!=25);

    int per=(((contaPeso40)*100)/contaPessoa);
    double alt=(acumulaAltura/contaDezVin);
    printf("Idade > 50............: %d\nMedia Altura 10 > 20..: %.2lf\nPercetagem > 40.......: %d%%\n",contaMaiorC,alt,per);
    return 0;
}
