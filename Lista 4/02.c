#include <stdio.h>

int main()
{
    int vetor1[10] = {0,1,2,3,4,5,6,7,8,9};
    int vetor2[10] = {10,11,12,13,14,15,16,17,18,19};
    int vetor3[20], j = 0, aux, k = 0;
    
    for(int i = 0; i < 20; i+=2){
        vetor3[i] = vetor1[j];
        printf(" PRIMEIRO %d\n", vetor3[i]);
        j++;
    };

    for(int i = 1; i < 20; i+=2){
        vetor3[i] = vetor2[k];
        printf(" SEGUNDO %d\n", vetor3[i]);
        k++;
    };

    printf("Vetor intercalado e invertido:");

    for(int k = 19; k >= 0; k--){
        printf(" %d", vetor3[k]);
    };

    return 0;
}