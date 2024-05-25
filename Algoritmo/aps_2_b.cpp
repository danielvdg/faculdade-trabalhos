#include <stdio.h>
#include <stdlib.h> 

main() {
    int numero;

    do {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0)
            break;

        int somaPares = 0, somaImpares = 0;
        printf("\nNumeros pares ate %d:\n", numero);
        for (int i = 0; i < numero; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                somaPares += i;
                if (i != numero - 2) {
                        printf(" - ");
                    }
            }
        }
        printf("\nSoma dos pares: %d\n", somaPares);

        printf("\nNúmeros ímpares ate %d:\n", numero);
        for (int i = 1; i < numero; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
                somaImpares += i;
                if (i != numero - 1) {
                        printf(" - ");
                    }
            }
        }
        printf("\nSoma dos impares: %d\n", somaImpares);

        printf("\nPressione Enter para continuar...");
        while (getchar() != '\n');
        getchar(); 
        system("clear || cls");
    } while (numero >= 0);

    printf("Programa encerrado.\n");
}
