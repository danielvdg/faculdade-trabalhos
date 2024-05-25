#include <stdio.h>

void imprimeBinario(int numero) {
    if (numero > 1) {
        imprimeBinario(numero / 2);
    }
    printf("teste %d \n", numero);
    printf("%d \n", numero % 2);
}

int main() {
    int numero;

    while (1) {
        
        printf("Digite um numero decimal (0 para sair): ");
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
      
        imprimeBinario(numero);
        printf("\n");
    }
    
}
