#include <stdio.h>

int main()
{
    int num, divisor, subtr;
    int quociente = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Digite o número divisor: ");
    scanf("%d", &divisor);

    while(subtr > 1){
        subtr = num - divisor;
        num = subtr;
        quociente++;
    };
    
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", num);
    
    return 0;
}