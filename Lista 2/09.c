#include <stdio.h>

int main()
{
    int idade, anos, opiniao, quant = 0, velho, novo, quantO = 0, quantP = 0;
    float media, porcen;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    velho = idade;
    novo = idade;

    while(idade != 0){
        quant++;
        printf("Grau de instrução, em anos: ");
        scanf("%d", &anos);
        printf("Opinião sobre o filme: 1 = ótimo, 2 = regular ou 3 = péssimo: ");
        scanf("%d", &opiniao);
        if(opiniao == 1){
            quantO = quantO + idade;
        };
        if(idade>velho){
            velho = idade;
        };
        if (idade<novo){
            novo = idade;
        };
        if (anos > 10 && opiniao == 3){
            quantP++;
        };
        printf("(O número 0 encerra o loop) Informe sua idade: ");
        scanf("%d", &idade);

    };
    media = (float)quantO/quant;
    porcen = (float)(quantP*100)/quant; 

    printf("Quantidade de pessoas presentes: %d\n", quant);
    printf("Média das idades das pessoas que responderam ótimo: %.2f\n", media);
    printf("A idade do espectador mais velho: %d\n", velho);
    printf("A idade do espectador mais novo: %d\n", novo);
    printf("O percentual de pessoas com mais de 10 anos de instrução que responderam péssimo: %d", quantP);

    return 0;
}