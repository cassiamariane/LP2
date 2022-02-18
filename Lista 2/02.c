#include <stdio.h>

int main()
{
    int num, multi;
    int lista[12] = {1};
    int j = 11;
    printf("Digite um número de 1 a 10: ");
    scanf("%d", &num);

    for(int i = 1; i < 12; i++){
        multi = num*i;
        lista[i] = multi;
    };
    printf("Múltiplos: ");
    for(int j = 11; j >= 0 ; j--){
        printf(" %d", lista[j]);
    };

    return 0;
}