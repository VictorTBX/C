#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantChoco,quantAluno;

    printf("\nQuantos chocolates: ");
    scanf("%d",&quantChoco);

    printf("\nQuantos Alunos: ");
    scanf("%d",&quantAluno);

    printf("\nNumero de chocolates por alunos: %d",(quantChoco/quantAluno));
    printf("\nChocolates que sobraram: %d",(quantChoco%quantAluno));
    return 0;
    //
}
