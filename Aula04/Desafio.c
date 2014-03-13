#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,y1,x2,y2,x,y,contace,meto;
    char simnao='s';

    printf("Digite coordenada x (x1 x2): ");
    scanf("%d %d",&x1,&x2);

    printf("Digite coordenada y (y1 y2): ");
    scanf("%d %d",&y1,&y2);
    contace=0;

    do {
        printf("Digite coordenada do meteoro x e y: ");
        scanf("%d %d",&x,&y);
        if((x>=x1 && x<=x2) && (y>=y1 && y<=y2)){
            contace++;
            printf("\nCaiu matou uma vaca...");
        }else{
            printf("\nPassou longe...");
        }
        printf("Deseja inserir mais ? (s/n)");
        fflush(stdin);
        scanf("%c", &simnao);
    }while(simnao=='s');
    printf("\nCairam %d Meteoros na fazenda.\n",contace);
    return 0;
}
