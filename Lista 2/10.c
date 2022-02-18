#include <stdio.h>

int main()
{
    int opcao, conta, saldo = 0, transacao, valor, quantidade;
    float taxa;

    printf("Deseja declarar uma transação? 1- Sim, 2 - Não: ");
    scanf("%d", &opcao);
    while (opcao == 1){
        printf("Digite o número da conta: ");
        scanf("%d", &conta);
        printf("Digite o saldo disponível: ");
        scanf("%d", &saldo);
        printf("Quantas transações foram feitas durante o dia? ");
        scanf("%d", &quantidade);
        for(int i = 0; i < quantidade; i++){
            printf("Qual o valor para transação? ");
            scanf("%d", &valor);
            printf("A transação é de recebimento ou de pagamento? 1- Recebimento, 2 - Pagamento ");
            scanf("%d", &transacao);
            if(transacao==1){
                saldo = saldo + valor;
            };
            if(transacao==2){
                saldo = saldo - valor;
            };
            if(saldo < 30){
            taxa = (float)0.04*saldo;
            saldo = saldo - taxa;
            printf("Taxa de 4 porcento aplicada, pois não compreende o mínimo exigido, saldo atual: %d\n", saldo);
            };
        };
        if(saldo == 0){
            printf("Saldo zerado, portanto, não há fundos na conta: %d\n", conta); 
        }else{
            printf("Conta: %d\n", conta);
            printf("Saldo final: %d\n", saldo);
        };
        printf("Deseja declarar uma transação? 1- Sim, 2 - Não: ");
        scanf("%d", &opcao);
    };
    
    return 0;
}