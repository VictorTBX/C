#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10] = {1,2,5,2,4,7,6,8,10,9};
    int i=0;

    for (i=9;i>0;i--){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}
