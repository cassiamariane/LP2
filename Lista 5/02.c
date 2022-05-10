#include <stdio.h>
void zeroPares(int *vet){
    if((*vet) % 2 == 0){
        
        *vet = 0;
        
    }
    printf("%d", *vet);
}
    
void dobra(int *vet){
    int multi;
    multi = (*vet) * 2;
}

void soma(int *vet, int *vet2){
    int soma;
    soma = (*vet) + (*vet2);
    *vet = soma;
}

int main()
{
    int vetorInteiros[30], vetor2[30];
    int *vet;
    
    printf("Digite 30 números inteiros: ");
    gets(vetorInteiros);
    
    printf("Digite 30 números inteiros: ");
    gets(vetor2);
    
    
    zeroPares(vetorInteiros);
    dobra(vetorInteiros);
    soma(vetorInteiros, vetor2);
    

    return 0;
}