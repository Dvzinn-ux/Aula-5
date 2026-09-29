#include <stdio.h>

int main(void) {
    float nota;
    float soma = 0;
    float media;
    int cliente;

    for (cliente = 1; cliente <= 10; cliente++) {
        printf("Digite a nota do cliente %d (de 0 a 10): ", cliente);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite um valor entre 0 e 10: ");
            scanf("%f", &nota);
        }

        soma = soma + nota;
    }

    media = soma / 10;

    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: a media do atendimento esta abaixo do esperado!\n");
    } else {
        printf("Atendimento dentro do esperado.\n");
    }

    return 0;
}