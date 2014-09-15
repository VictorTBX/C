#include <stdio.h>
#include <stdlib.h>

int main(){
    int habA=90*(pow(10,6)), habB=20*(pow(10,6)), anos=0,guarda=0;
    double perceB=((habB)*0.03);
    double igualar=((habA-habB)/perceB);
    while(habA>guarda){
        guarda=habB+(perceB*anos);
        anos++;
    }
    printf("\n%lf anos para Igualar",igualar);
    printf("\n%d anos para ultrapassar \n",(anos-1));
    return 0;
}
