#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, *p;
    x = 10;
    *p = x; // a variavel não foi inicializada
    printf("\n%d\n", &p);
}


void main(){
  int x, *p;
  x = 10;
  p = x; // a variavel nao foi inicializada
  printf ("%d", *p);
}


