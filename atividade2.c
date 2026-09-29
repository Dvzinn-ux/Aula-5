#include <stdio.h>

int main(void) {
    int opcao;
    int quantidade;
    int i;
    float total = 0;

    do {
        printf("1 - Adicionar R$0,50\n");
        printf("2 - Adicionar R$1,00\n");
        printf("3 - Adicionar R$2,00\n");
        printf("4 - Sair e ver o total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Quantas moedas deseja adicionar? ");
            scanf("%d", &quantidade);

            for (i = 1; i <= quantidade; i++) {
                if (opcao == 1) {
                    total = total + 0.50;
                } else if (opcao == 2) {
                    total = total + 1.00;
                } else {
                    total = total + 2.00;
                }
            }

            printf("Total acumulado ate agora: R$ %.2f\n", total);
        } else if (opcao != 4) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    printf("\nValor total guardado no cofrinho: R$ %.2f\n", total);

    return 0;
}