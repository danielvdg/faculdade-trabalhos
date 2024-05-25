#include <stdio.h>

int main() {
    char nome[100];
    int contador = 0;
    int i = 0;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    while (nome[i] != '\0') {
        if (nome[i] == 'A' || nome[i] == 'a') {
            contador++;
        }
        i++;
    }

    printf("Quantidade de letras 'A' no nome: %d\n", contador);

    return 0;
}

