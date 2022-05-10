#include <stdio.h>
#include <math.h>

long int fatorial(int x) {
    long int fator;
    for(fator = 1; x > 1; x--){
        fator = fator * x;
    };
    return (fator);
};
int expo(int x,  int y){
    int operacao;
    operacao = x*pow(x, y - 1);
    return (operacao);
};  
int multi(int x, int y){
    int operacao;
    for(int i = 0;i <= y; i++){
        operacao = x + (x*(y - 1));  
    };
    return (operacao);
};  
float mod(float x, float y){
    if(x < y){
        return x;
    };
    printf("%f %f\n", x, y);
    return mod(x - y, y);
    };
int sequencia(int x){
    int operacao;
    int resultado = 0;
    for(int i = 1; operacao > 0; i++){
        operacao = (x - i) + (x - (i + 1));
        resultado = resultado + operacao;
    };
    return (resultado);
    };

int main()
{
    int opcao, x, y;
    float xmod, ymod;

    printf("Qual operação deseja realizar? 1- fatorial, 2- exponenciação, 3 - multiplicação, 4- módulo, 5- Sequência de N termos de Fibonacci, 6- fim:  ");
    scanf("%d", &opcao);
    while(opcao != 6){
    if(opcao == 1){
        printf("Digite o número para calcular o fatorial: ");
        scanf("%d", &x);
        printf("O resultado é %ld\n", fatorial(x));
    };
    if(opcao == 2){
        printf("Digite a base: ");
        scanf("%d", &x);
        printf("Digite o expoente: ");
        scanf("%d", &y);
        printf("O resultado é %d\n", expo(x, y));
    };
    if(opcao == 3){
        printf("Digite o número: ");
        scanf("%d", &x);
        printf("Digite o multiplicador: ");
        scanf("%d", &y);
        printf("O resultado é %d\n", multi(x, y));
    };
    if(opcao == 4){
        printf("Informe o valor de x: ");
        scanf("%f", &xmod);
        printf("Informe o valor de y: ");
        scanf("%f", &ymod);
        printf("O módulo é %2.f\n", mod(x, y));
    };
    if(opcao == 5){
        printf("Informe o valor de x: ");
        scanf("%d", &x);
        printf("O resultado é %d\n", sequencia(x));
    };
    if(opcao == 6){
        break;
    };
    printf("Qual operação deseja realizar? 1- fatorial, 2- exponenciação, 3 - multiplicação, 4- módulo, 5- Sequência de N termos de Fibonacci, 6- fim:  ");
    scanf("%d", &opcao);
    };
    return 0;
}