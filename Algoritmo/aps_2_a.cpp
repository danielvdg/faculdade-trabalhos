#include <stdio.h>

void ordenarTres(int a, int b, int c) {
    int temp;
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("Os números em ordem crescente são: %d, %d, %d\n", a, b, c);
}

main() {
    int x, y, z;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);
   
    ordenarTres(x, y, z);
}

