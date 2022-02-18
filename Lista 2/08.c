#include <stdio.h>

int main()
{
    int num, multi, multiplicador = 1;
    printf("Informe um número: ");
    scanf("%d", &num);
    while (multiplicador<=10){
        multi = num * multiplicador;
        printf("%d", num);
        printf(" X %d", multiplicador);
        printf(" = %d\n", multi);
        multiplicador++;
    }
    return 0;
}