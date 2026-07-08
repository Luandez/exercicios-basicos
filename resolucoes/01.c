//Escreva um algoritmo para ler uma temperatura em graus fahrenheit, calcular e escrever o valor correspondente em graus celcius:
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float c, f;
    printf("Entre com a temperatura em F: ");
    fflush(stdout);
    scanf("%f", &f);

    c = (f - 32) * 5/9;
    printf("A temperatura de %.2fF convertida para celsius é %.2fC.\n", f, c);
    return 0;
}