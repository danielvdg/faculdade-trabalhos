#include <stdio.h>

main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Como foi digitado o numero %d a impressao ficaria assim:\n", numero);
    for (int i = numero; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }

}
