#include <stdio.h>

main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os numeros impares menores que %d sao:\n", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

}
