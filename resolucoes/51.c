/*
Escreva um programa que calcule e imprima o produto dos inteiros ímpares de 1 a 15
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 1; i <= 15; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}