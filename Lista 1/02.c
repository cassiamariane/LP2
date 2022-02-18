#include <stdio.h>
#include <math.h>

int main()
{
    int menu, numero1, numero2, soma, subtr, multi, expo, logc;
    float div, logar, raiz;
    while (menu != 8){
        printf("Qual operação você gostaria de realizar?\n 1 - Soma \n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Exponenciação\n 6 - Log\n 7 - Raiz quadrada\n 8 - Para sair do loop\n ");
        scanf("%d", &menu);
        if (menu == 1){
            printf("Digite o primeiro número: ");
            scanf("%d", &numero1);
            printf("Digite o segundo número: ");
            scanf("%d", &numero2);
            soma = numero1 + numero2;
            printf("A soma dos números é %d\n",soma);
        };
        if (menu == 2){
            printf("Digite o primeiro número: ");
            scanf("%d", &numero1);
            printf("Digite o segundo número: ");
            scanf("%d", &numero2);
            subtr = numero1 - numero2;
            printf("A subtração dos números é %d\n",subtr);
        };
        if (menu == 3){
            printf("Digite o primeiro número: ");
            scanf("%d", &numero1);
            printf("Digite o segundo número: ");
            scanf("%d", &numero2);
            multi = numero1 * numero2;
            printf("A multiplicação dos números é %d\n",multi);
        };
        if (menu == 4){
            printf("Digite o dividendo: ");
            scanf("%d", &numero1);
            printf("Digite o divisor: ");
            scanf("%d", &numero2);
            div = (float)numero1/numero2;
            printf("O resultado da divisão é %.2f\n",div);
        };
        if (menu == 5){
            printf("Digite a base: ");
            scanf("%d", &numero1);
            printf("Digite o expoente: ");
            scanf("%d", &numero2);
            expo = pow(numero1,numero2);
            printf("O resultado da exponenciação é %d\n",expo);
        };
        if (menu == 6){
            printf("Deseja calcular 1 - logaritmo natural ou 2 - logarítmo na base 10? ");
            scanf("%d", &logc);
            if (logc == 1){
                printf("Digite o número: ");
                scanf("%d", &numero1);
                logar = log(numero1);
                printf("O resultado do logarítmo natural desse número é %.2f\n",logar);
            };
            if (logc == 2){
                printf("Digite o número: ");
                scanf("%d", &numero1);
                logar = log10(numero1);
                printf("O resultado do logarítmo de base 10 desse número é %.2f\n",logar);
            };
        };
        if (menu == 7){
            printf("Digite o número que deseja calcular a raiz quadrada: ");
            scanf("%d", &numero1);
            raiz = sqrt(numero1);
            printf("A raiz quadrada desse número é %.2f\n",raiz);
        };
        
    };
    if (menu == 8){
            printf("Fim do Programa\n");
        };
    return 0;
}