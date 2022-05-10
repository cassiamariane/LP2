#include <stdio.h>
#include "biblioteca.h"


int main(){

    tpPonto desenho[4];

    for(int i = 0; i < 4; i++){
        printf("R:");
        scanf("%d", &desenho[i].pixel.r);
        printf("G:");
        scanf("%d", &desenho[i].pixel.g);
        printf("B:");
        scanf("%d", &desenho[i].pixel.b);
        printf("X:");
        scanf("%d", &desenho[i].x);
        printf("Y:");
        scanf("%d", &desenho[i].y);
    }

    preenche(desenho);
    imprime(desenho);
    apaga(desenho, 1);

    return 0;
}