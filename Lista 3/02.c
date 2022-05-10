#include <stdio.h>
#include <math.h>
long double maior(float x){
    long double y, resultado = 0;
    for(int i = 1; i <= 100; i++){
        y = (x + i)/i;
        resultado = resultado + y;
    };
    return (printf("O resultado é %Lf", resultado));
};
long double menor(float x){
    long double y, resultado = 0;
    int j = 1, a = 0;
    for(int i = 100; i > 0 ; i--){
        y = (pow(x,2) + j)*(pow(-1,a))/i;
        resultado = resultado + y;
        j++;
        a++;
    };
    return (printf("O resultado é %Lf", resultado));
}; 
int main()
{
    float x;
    printf("Digite um número: ");
    scanf("%f", &x);
    if(x > 0){
        maior(x);
    };
    if(x <= 0){
        menor(x);
    };

    return 0;
}