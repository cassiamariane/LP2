#include <stdio.h>

int main()
{
    int a[3][5], soma_linha[2], soma = 0;

    a[0][0] = 1;
    a[1][0] = 2;
    a[2][0] = 3;
    a[0][1] = 4;
    a[1][1] = 5;
    a[2][1] = 6;
    a[0][2] = 7;
    a[1][2] = 8;
    a[2][2] = 9;
    a[0][3] = 10;
    a[1][3] = 11;
    a[2][3] = 12;
    a[0][4] = 13;
    a[1][4] = 14;
    a[2][4] = 15;

    for (int i=0; i<3; i++ ){
        for (int j=0; j<5; j++ )
        {
            printf (" %d", a[ i ][ j ]);
        };
        printf("\n");
    };
    /* Primeira Linha*/
    for(int i = 0; i < 5; i++){
        soma = soma + a[0][i];
    };

    soma_linha[0] = soma;
    soma = 0;

    /* Segunda Linha*/
    for(int i = 0; i < 5; i++){
        soma = soma + a[1][i];
    };

    soma_linha[1] = soma;
    soma = 0;

    /* Terceira Linha*/
    for(int i = 0; i < 5; i++){
        soma = soma + a[2][i];
    };

    soma_linha[2] = soma;

    for(int i = 0; i < 3; i++){
       printf("Resultado da soma da linha %d\n", soma_linha[i]);
    };

    return 0;
}