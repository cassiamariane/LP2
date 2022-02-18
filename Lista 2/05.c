#include <stdio.h>
#include <math.h>

int main()
{
    int num, maior, menor;
    int soma = 0, quant = 0, quantpares = 0, quantimpares = 0;
    float porcen, media;
    
    printf("Digite um número inteiro, negativo encerra o loop: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while(num >= 0){
        quant++;
        if(num % 2 == 0){
            quantpares++;
        } else{
            quantimpares++;
            soma = soma + num;
        };
        if(num > maior){
            maior = num;
        };
        if(num < menor){
            menor = num;
        };
        printf("Digite um número inteiro, negativo encerra o loop: ");
        scanf("%d", &num);
    };

    porcen = (float)(quantpares*100)/quant;
    media = (float)soma/quantimpares;
    printf("Quantidade de números considerados: %d\n", quant);
    printf("Porcentual de números pares: %.2f\n", porcen);
    printf("Média dos números ímpares: %.2f\n", media);
    printf("Maior número digitado: %d\n", maior);
    printf("Menor número digitado: %d", menor);
    return 0;
}