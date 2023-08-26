#include <stdio.h>

int main() {
    int n, numero, menor, maior;

    printf("quantidade de números: ");
    scanf("%d", &n);
    printf("Digite os numeros:\n");
    scanf("%d", &numero);
    menor = numero;
    maior = numero;
    for (int i = 1; i < n; i++) {
        scanf("%d", &numero);
        if (numero < menor) {
            menor = numero;
        }
        if (numero > maior) {
            maior = numero;
        }
    }
    printf("menor: %d\n", menor);
    printf("maior: %d", maior);

    return 0;
}