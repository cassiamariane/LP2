#include <stdio.h>

int main()
{
    int numero = 0, quantidade = 0, soma = 0, maior, menor;
    float media;

    printf("Insira números um de cada vez, o número 999 encerra o loop: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    while(numero!=999){
      quantidade++;
      soma = soma + numero;
      media = (float)soma/quantidade;
      if(numero > maior){
            maior = numero;
        };
        if(numero < menor){
            menor = numero;
        };
      printf("Insira números um de cada vez, o número 999 encerra o loop: ");
      scanf("%d", &numero);
    };
    printf("A quantidade de número digitados foi de: %d\n",quantidade);
    printf("A média dos números digitados é de: %.2f\n",media);
    printf("O menor número digitado foi %d\n", menor);
    printf("O maior número digitado foi %d\n", maior);
    return 0;
}