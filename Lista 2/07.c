#include <stdio.h>

int main()
{
    int prato, bebida, sobremesa, soma = 0;
    printf("Opções de Prato Principal: 1 - Vegetariano, 2 -  Peixe, 3 - Frango, 4 - Carne, digite a opção desejada: ");
    scanf("%d", &prato);
    if (prato == 1){
        soma = soma + 180;
    }
    if (prato == 2){
        soma = soma + 230;
    }
    if (prato == 3){
        soma = soma + 250;
    }
    if (prato == 4){
        soma = soma + 250;
    }
    printf("Opções de Bebida: 1 - Chá, 2 -  Suco de Laranja, 3 - Suco de Melão, 4 - Refrigerante Diet, digite a opção desejada: ");
    scanf("%d", &bebida);
    if (bebida == 1){
        soma = soma + 80;
    }
    if (bebida == 2){
        soma = soma + 150;
    }
    if (bebida == 3){
        soma = soma + 70;
    }
    if (bebida == 4){
        soma = soma + 2;
    }
    printf("Opções de Prato Sobremesa: 1 - Abacaxi, 2 -  Sorvete Diet, 3 - Mousse Diet, 4 - Mousse de Chocolate, digite a opção desejada: ");
    scanf("%d", &sobremesa);
    if (sobremesa == 1){
        soma = soma + 75;
    }
    if (sobremesa == 2){
        soma = soma + 110;
    }
    if (sobremesa == 3){
        soma = soma + 60;
    }
    if (sobremesa == 4){
        soma = soma + 250;
    }

    printf("Quantidade de calorias na refeição escolhida: %d", soma);
    return 0;
}