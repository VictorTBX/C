#include <stdio.h>
#include <stdlib.h>

void convert(int x,int y,int *total);

int main(){
    int h,m;
    int *total;
    printf("Digite o Hora e minuto: ");
    scanf("%d %d",&h ,&m);
    convert(h,m,&total);
    printf("Minutos totais %d ... %c\n",total,1);
    return 0;
}
void convert(int x,int y,int *total){
    *total=(x*60)+y;
}
