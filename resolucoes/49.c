/*
Escreva um programa que encontre o menor valor entre vários inteiros. Admita que o primeiro
valor lido especifica o número de valores restantes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, x;

    printf("Informe um valor inteiro: ");
    fflush(stdout);
    scanf("%d", &n);

    int menor = n;

    for (int i = 0; i < n; i++)
    {
        printf("Informe um valor inteiro: ");
        fflush(stdout);
        scanf("%d", &x);

        if (x < menor)
        {
            menor = x;
        }
    }

    printf("O menor numero: %d\n", menor);
    return 0;
}