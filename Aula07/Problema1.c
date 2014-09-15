#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    c='s';

    char *p;
    p=&c;

    printf("Endereco de c %u\n",p); //%g hexadecimal
    printf("Conteudo de c %c\n",*p);
    return 0;
}
