#include <stdio.h>

int main(void) {
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000) {
        printf("Digite os passos da hora %d: ", horas + 1);
        scanf("%d", &passos);

        total = total + passos;
        horas++;

        printf("Total acumulado: %d passos\n\n", total);
    }

    printf("Meta atingida! Foram necessarias %d horas.\n", horas);

    return 0;
}
