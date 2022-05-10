#include <stdio.h>

int preenche(int M[4][5]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um numero: ");
            scanf("%d", &M[i][j]);
        }
    }
    return M;
}


void main(){
    int M[4][5], dobro[4][5], soma[4][5];
    preenche(M);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
        {
            dobro[i][j] = M[i][j] * 2;
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
        {
            soma[i][j] = M[i][j] + dobro[i][j];
        }
    }

    printf("Matriz: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
        {
            printf("%d\n", M[i][j]);
        }
    }

    printf("Dobro: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
        {
            printf("%d\n", dobro[i][j]);
        }
    }

    printf("Soma: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
        {
            printf("%d\n", soma[i][j]);
        }
    }
    

}