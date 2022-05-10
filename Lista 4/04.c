#include <stdio.h>

int main()
{
    int numeros[10], i = 0, maior = 0, quant = 0;

    printf("Digite dez números, um de cada vez: ");
    scanf("%d", &numeros[i]);
    maior = numeros[i];

    while(i < 9){
        if(numeros[i] >= maior){
            maior = numeros[i];
            quant++;
        };
        i++;
        printf("Digite o próximo número: ");
        scanf("%d", &numeros[i]);
    };

    printf("O maior número digitado foi: %d", maior);
    printf(" e ele foi digitado %d vezes", quant);

    return 0;
}