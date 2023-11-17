#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro para a contagem regressiva: ");
    scanf("%d", &numero);

    for (int i = numero; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
