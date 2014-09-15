#include <stdio.h>
#include <stdlib.h>
int main(){
    void adiciona(int *ptr, int num, int con);
    int vet[5] = {3,5,7,9,11};
    int j, c = 10;
    adiciona(vet,5,c);
    for (j=0; j<5;j++){
        printf("%d\n",*(vet+j));
    }
    return 0;
}
void adiciona(int *ptr, int num, int con){
    int k;
    for (k=0; k<num; k++) {
       *(ptr) = *(ptr)+con;
    ptr++;
    }
}
