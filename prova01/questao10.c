#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,y1,x2,y2,x,y,contAcertos,meto;

    printf("Digite coordenada na fazenda x1 e x2: ");
    scanf("%d %d",&x1,&x2);

    printf("Digite coordenada na fazenda y1 e y2: ");
    scanf("%d %d",&y1,&y2);

    printf("Quantos meteoros: ");
    scanf("%d",&meto);

    int conta=1;
    contAcertos=0;
    while (conta<=meto){
        printf("\nDigite coordenada do Meteorito %d x e y: ",conta);
        scanf("%d %d",&x,&y);
        if((x>=x1 && x<=x2) && (y>=y1 && y<=y2)){
            contAcertos++;
            printf("\nMeteorito %d caiu na fazenda...\n",conta);
        }else{
            printf("\nMeteorito %d passou longe...\n",conta);
        }
        conta++;
    }
    printf("\nCairam %d Meteoritos na fazenda.\n",contAcertos);
    return 0;
}
