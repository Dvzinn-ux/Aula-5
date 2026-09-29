#include <stdio.h>

int main(void) {
    float consumo;
    float soma = 0;
    int morador;

    for (morador = 1; morador <= 5; morador++) {
        printf("Digite o consumo do morador %d (em m3): ", morador);
        scanf("%f", &consumo);

        soma = soma + consumo;

        if (consumo <= 20) {
            printf("Morador %d: consumo dentro da media.\n\n", morador);
        } else {
            printf("Morador %d: consumo acima da media.\n\n", morador);
        }
    }

    printf("Consumo medio geral: %.2f m3\n", soma / 5);

    return 0;
}
