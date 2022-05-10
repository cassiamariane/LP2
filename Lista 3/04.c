#include <stdio.h>
#include <math.h>

float func(float x){
        float operacao;
        if(x >= 10){
            operacao = (float)(sqrt(x - 10))/2;
        };
        if(x <= 4){
            operacao = (float)(sqrt(pow(x,2) + 1))/2;
        };
        if(x > 4 && x < 10){
            operacao = (float)pow(x,3)/(pow(x,2) - 16);
        };
        printf("O resultado da operação é: %f\n", operacao);
        return (operacao);
    };

int main()
{
    float x;
    printf("Digite números reais positivos, um de cada vez: ");
    scanf("%f", &x);
    while(x > 0){
        func(x);
        printf("Digite números reais positivos, um de cada vez: ");
        scanf("%f", &x);
    };
    return 0;
}