#include <stdio.h>

int preenche(int numeros[20]){
    for(int i = 0; i < 20; i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros[i]);
    }
    return numeros;
}

int trocar(int numeros[20]){
    int aux;
    for(int i = 0; i < 10; i++){
        aux = numeros[i];
        numeros[i] = numeros[19 - i];
        numeros[19 - i] = aux;
    }
    return numeros;
}

void main(){
    int numeros[20];

    preenche(numeros);
    printf("Vetor: ");
    for(int i = 0; i < 20; i++){
        printf("%d\n", numeros[i]);
    }

    trocar(numeros);
    printf("Vetor trocado: ");
    for(int i = 0; i < 20; i++){
        printf("%d\n", numeros[i]);
    }
}