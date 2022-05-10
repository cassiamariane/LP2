#include <stdio.h>

int main()
{
    float m[4][5], dobro[4][5], soma[4][5], multi, adicao;

    m[0][0] = 1;
    m[1][0] = 2;
    m[2][0] = 3;
    m[3][0] = 4;
    m[0][1] = 5;
    m[1][1] = 6;
    m[2][1] = 7;
    m[3][1] = 8;
    m[0][2] = 9;
    m[1][2] = 10;
    m[2][2] = 11;
    m[3][2] = 12;
    m[0][3] = 13;
    m[1][3] = 14;
    m[2][3] = 15;
    m[3][3] = 16;
    m[0][4] = 17;
    m[1][4] = 18;
    m[2][4] = 19;
    m[3][4] = 20;

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++ )
        {
            printf("%d", i);
            m[ i ][ j ] = i;
        };
        printf("\n");
    };

    /* Primeira Coluna */
    for(int i = 0; i < 4; i++){
        int j = 0;
        multi = (m[i][j]) * 2;
        dobro[i][j] = multi;
    };
    /* Segunda Coluna */
    for(int i = 0; i < 4; i++){
        int j = 1;
        multi = (m[i][j]) * 2;
        dobro[i][j] = multi;
    };
    /* Terceira Coluna */
    for(int i = 0; i < 4; i++){
        int j = 2;
        multi = (m[i][j]) * 2;
        dobro[i][j] = multi;
    };
    /* Quarta Coluna */
    for(int i = 0; i < 4; i++){
        int j = 3;
        multi = (m[i][j]) * 2;
        dobro[i][j] = multi;
    };
    /* Quinta Coluna */
    for(int i = 0; i < 4; i++){
        int j = 4;
        multi = (m[i][j]) * 2;
        dobro[i][j] = multi;
    };
    /* Primeira Coluna */
    for(int i = 0; i < 4; i++){
        int j = 0;
        adicao = (m[i][j]) + (dobro[i][j]);
        soma[i][j] = adicao;
    };
    /* Segunda Coluna */
    for(int i = 0; i < 4; i++){
        int j = 1;
        adicao = (m[i][j]) + (dobro[i][j]);
        soma[i][j] = adicao;
    };
    /* Terceira Coluna */
    for(int i = 0; i < 4; i++){
        int j = 2;
        adicao = (m[i][j]) + (dobro[i][j]);
        soma[i][j] = adicao;
    };
    /* Quarta Coluna */
    for(int i = 0; i < 4; i++){
        int j = 3;
        adicao = (m[i][j]) + (dobro[i][j]);
        soma[i][j] = adicao;
    };
    /* Quinta Coluna */
    for(int i = 0; i < 4; i++){
        int j = 4;
        adicao = (m[i][j]) + (dobro[i][j]);
        soma[i][j] = adicao;
    };

    printf("Matriz M: \n");

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++ )
        {
            printf (" %2.f", m[ i ][ j ]);
        };
        printf("\n");
    };

    printf("Matriz dobro de M: \n");

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++ )
        {
            printf (" %2.f", dobro[ i ][ j ]);
        };
        printf("\n");
    };

    printf("Matriz soma de M e dobro: \n");

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++ )
        {
            printf (" %2.f", soma[ i ][ j ]);
        };
        printf("\n");
    };

    return 0;
};