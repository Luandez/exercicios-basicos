/*
Escreva um programa que calcule e imprima a soma dos inteiros pares de 2 a 30.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int soma = 0;

    for (int i = 2; i <= 30; i += 2)
    {
        printf("%d\n", i);
        soma += i;
    }

    printf("Soma = %d\n", soma);
    return 0;
}