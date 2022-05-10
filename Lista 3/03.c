#include <stdio.h>
#include <math.h>
float divisores(int m){
    printf("Divisores:");
    int quant = 0, mod;
        for(int i = 1; i <= m; i++){
            mod = m % i;
            if(mod == 0){
                printf(" %d", i);
                quant++;
            }; 
        };
        printf("\nA quantidade total de divisores é: %d\n", quant);
        return 0;
    };

long double fatorial(float m) { 
    long double f;   
    for(int f = 1; m > 1; m--){
        f = f * m;
    };
    printf("O resultado do fatorial é %2.Lf\n", f);
    return (f);
};

int somar(int m){
    int soma = 0;
    for(int i = 0; i <= m; i++){
        soma = soma + i;
    };
    printf("A soma de todos os números do número 1 até o número informado é: %d\n", soma);
    return (soma);
    };

int main()
{
    int m;
    printf("Digite números inteiros positivos, um de cada vez: ");
    scanf("%d", &m);
    while(m > 0){
        if(m % 2 == 0){
            divisores(m);
        } else{
            if(m < 10){
                fatorial(m);
            }else{
                somar(m);
            };

        };
        printf("Digite números inteiros positivos, um de cada vez: ");
        scanf("%d", &m);
    };
    return 0;
}