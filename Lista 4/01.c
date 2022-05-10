#include <stdio.h>

int main()
{
    int vetor[20];
    for(int i = 0; i < 20; i++){
        printf("Digite um número: ");
        scanf(" %d", &vetor[i]);
    };

    printf("Vetor:");

    for(int i = 0; i < 20; i++){
        printf(" %d", vetor[i]);
    };
    
     printf("\n Novo vetor: ");

    for(int j = 20; j >= 1; j--){
        printf(" %d", vetor[j]);
    };

    return 0;
}