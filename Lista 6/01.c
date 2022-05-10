#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} data;

void inicializa (int dia, int mes, int ano, data *a){
    a->dia = dia;
    a->mes = mes;
    a->ano = ano;
};

void valida( data *a){
    if  (a->dia > 0 && a->dia <= 31 && a->mes > 0 && a->mes <= 12 && a->ano <= 2022){
        printf("A data é válida!\n");
    }   else {
        printf("A data inválida!\n");
    }
}


void imprime( data *a){
    printf("A data recebida foi: %d / %d / %d\n", a->dia, a->mes, a->ano);
};


int main(){
    data x;
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    inicializa(dia, mes, ano, &x);
    valida(&x);
    imprime(&x);
    return 0;
}
