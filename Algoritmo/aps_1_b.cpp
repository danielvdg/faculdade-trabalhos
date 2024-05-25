#include<stdio.h>
#include<stdlib.h>
#include <string.h>

main() {
int dia = 7;
float temp;
float maior;
float menor = 9999;
char diaSemana[30];
char diaMaior[30];
char diaMenor[30];

for(int i=1; i<=dia; i++) {

printf("\nDigite a temperatura do dia %d: ", i);
switch (i) {
            case 1:
               strcpy(diaSemana,"Domingo");
                break;
            case 2:
                strcpy(diaSemana,"Segunda");
                break;
            case 3:
                strcpy(diaSemana,"Terca");
                break;
            case 4:
                strcpy(diaSemana,"Quarta");
                break;
            case 5:
                strcpy(diaSemana,"Quinta");
				break;
            case 6:
                strcpy(diaSemana,"Sexta");
				break;
            case 7:
                strcpy(diaSemana,"Sabado");
				break;
}
scanf("%f", &temp);
if (temp>=maior) {
maior = temp;
strcpy(diaMaior, diaSemana);
} 
if (temp<=menor) {
menor = temp;
strcpy(diaMenor, diaSemana);
}
}
printf("\nO dia mais quente foi %s com %.2f grau celsius",diaMaior, maior);
printf("\nO dia mais frio foi %s com %.2f grau celsius",diaMenor, menor);
}
