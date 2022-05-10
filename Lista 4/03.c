#include <stdio.h>

int main(){

    int faces[6] = {0,0,0,0,0,0}, opcao, mais, maisface;

    printf("Entre 1 e 6, qual face foi obtida? ");
    scanf("%d", &opcao);
    while (opcao >= 1 && opcao <= 6){
        if(opcao == 1){
            faces[0] = faces[0] + 1;
        };
        if(opcao == 2){
            faces[1] = faces[1] + 1;
        };
        if(opcao == 3){
            faces[2] = faces[2] + 1;
        };
        if(opcao == 4){
            faces[3] = faces[3] + 1;
        };
        if(opcao == 5){
            faces[4] = faces[4] + 1;
        };
        if(opcao == 6){
            faces[5] =faces[5] + 1;
        };

        printf("Entre 1 e 6, qual face foi obtida? ");
        scanf("%d", &opcao);
    };
    mais = faces[0];
    for(int i = 0; i < 6; i++){
        if(mais < faces[i]){
            maisface = i + 1;
        };
    };
    
    printf("A face 1 foi obtida %d vezes\n", faces[0]);
    printf("A face 2 foi obtida %d vezes\n", faces[1]);
    printf("A face 3 foi obtida %d vezes\n", faces[2]);
    printf("A face 4 foi obtida %d vezes\n", faces[3]);
    printf("A face 5 foi obtida %d vezes\n", faces[4]);
    printf("A face 6 foi obtida %d vezes\n", faces[5]);
    printf("A face que ocorreu mais vezes foi: %d\n", maisface);

    return 0;
}