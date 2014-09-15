#include <stdio.h>
#include <stdlib.h>

void convert(int *x,int *y,int total);

int main(){
    int *h,*m;
    int total;

    printf("Digite um total: ");
    scanf("%d",&total);

    convert(&h,&m,total);
    printf("hora %d Minutos %d ... %c\n",h,m,1);

    return 0;
}
void convert(int *x,int *y,int total){
    *x=total/60;
    *y=total%60;
}
