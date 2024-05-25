#include <stdio.h>

main() {
    int n, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        soma += i;
        printf("%d + ", i);
    }

    printf("A soma dos %d primeiros numeros naturais e: %d\n", n, soma);

}
