#include <stdio.h>

int main()
{
    int a = 5000000, b = 7000000, anos = 0;
    float porcenA, porcenB;

    while(a < b){
        anos++;
        porcenA = (float)0.03*a;
        porcenB = (float)0.02*b;
        a = a + porcenA;
        b = b + porcenB;
    }

    printf("Quantidade de anos para que o país A ultrapasse o número de habitantes do país B: %d", anos);
    return 0;
}