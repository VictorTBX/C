#include <stdio.h>
#include <stdlib.h>
int soma (int x, int y){
    return x+y;
}
int raiz (int v1){
    return v1*v1;
}
double divide(int div){
    return div/2;
}

int main(){
    int A,B,C;
    do{
        printf("Digite um valor para [A]: ");
        scanf("%d",&A);
        printf("Digite um valor para [B]: ");
        scanf("%d",&B);
        printf("Digite um valor para [C]: ");
        scanf("%d",&C);
        printf("\n");
    }while(A<0 || B<0 || C<0);
    printf("\nD=%.lf", divide(soma(raiz(soma(A,B)) , raiz(soma(B,C)))));
    return 0;
}
