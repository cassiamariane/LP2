#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int maior21 = 0;
    int maior60 = 0;
    int contador = 0;
    float media;

    printf("Digite a idade: (Qualquer número negativo encerra o loop) ");
    scanf("%d", &idade);

    while(idade >= 0){
        if(idade > 21){
            maior21++;
        };
        if(idade > 60){
            maior60 = maior60 + idade;
            contador++;
        };

    printf("Digite a idade: ");
    scanf("%d", &idade);
    };
    if(maior60>0){
        media = (float)maior60/contador;
    };
    printf("Quantidade de pessoas com idade maior que 21 anos: %d\n", maior21);
    printf("Média de idade de pessoas com mais de 60 anos: %.2f\n", media);
    return 0;
}