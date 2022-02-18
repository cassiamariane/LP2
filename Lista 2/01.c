#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0; 
    int i = 1;
    float mod;
    printf("Digite números inteiros positivos um por vez, qualquer número negativo interrompe o loop: ");
    scanf("%d", &num);
    while(num > 0){
        printf("Número: %d\n", num);
        for(i = 1; i <= num; i++){
            mod = num % i;
            if(mod == 0){
                printf("Divisor: %d\n", i);
            }; 
        };
    printf("Digite números inteiros positivos um por vez, qualquer número negativo interrompe o loop: ");
    scanf("%d", &num);
    };
    return 0;
}