#include <stdio.h>
#include <stdlib.h>

int main(){
    int y, *p, x;
    y = 0;
    p = &y; //endereço de memoria
    x = *p; // conteudo
    x = 4;
    (*p)++;
    x--;
    (*p) += x;
    printf ("y = %d\n", y);
    return(0);
}
