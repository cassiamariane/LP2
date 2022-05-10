#include <stdio.h>
#include <string.h>

void maiusculas (char * str){
    printf("Função maiusculas: ");
    for(int i = 0; i < 30; i++){
        if(*(str + i) != '\0'){
            if(*(str + i) >= 97 && *(str + i) <= 122){
                *(str + i) = *(str + i) - 32;
            }
        }
    }
    printf("%s\n", str);
}

char concatena(char * str, char * str2){
    int j = strlen(str);
    for(int i = 0; i < strlen(str2) + 1; i++){
        *(str + j) = *(str2 + i);
        j++; 
    }
    return str;
}

int capitaliza(char * str){

    for(int i = 0; i < strlen(str); i++){
    //verifica se é a primeira letra
        if(i == 0){
            if(*(str + i) >= 97 && *(str + i) <= 122 ){
                //verifica se é minuscula
                *(str + i) -= 32;
                //muda p maiuscula
            }
        }
        if(*(str + i) == 32){
            //verifica se é espaço
            if(*(str + i + 1) >= 97 && *(str + i + 1) <= 122 ){
                //verifica se a proxima letra é minuscula
                *(str + i) -= 32;
                //muda p maiuscula
            }
        }  
    }
    printf("\nFunção capitaliza: %s", str);
}

int compara(char * str, char * str2){

    printf("\nFunção compara: ");

    for(int i = 0; i < strlen(str2); i++){
        if(*(str + i) > *(str2 + i)){ 
            printf("\n O resultado é 1, primeira string maior que a segunda");
            break;
        } if(*(str + i) < *(str2 + i)){ 
            printf("\n O resultado é - 1, primeira string menor que a segunda");
            break;
        } else if(*(str + i) == *(str2 + i)){
            printf("\n O resultado é 0, primeira string igual a segunda");
            break;
        }
    }
    
}

void main (){
    char str[30], str2[30], novo[30];
    int op = 0;

    printf("Digite a primeira string: ");
    gets(str);

    printf("\nDigite a segunda string: ");
    gets(str2);

    printf("\n---------------\n 1- Maiúsculas\n 2- Concatena\n 3- Capitaliza\n 4- Compara\n ---------------\n Opção escolhida: ");
    scanf("%d", &op);

    switch(op){
        case 1: 
        
        maiusculas(str);
        maiusculas(str2);
        break;

        case 2: 
        
        concatena(str, str2);
        printf("\nFunção concatena: %s", str);
        break;

        case 3: 
        
        capitaliza(str);
        break;

        case 4: 
        
        compara(str, str2);
        break;
    
    default:
        break;
    }
}