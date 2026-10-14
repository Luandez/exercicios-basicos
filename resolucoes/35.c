//Escreva um programa que leia um inteiro não-negativo e depois calcule e imprima seu fatorial
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 5, a = 1;

    for (int i = 2; i <= num; i = i + 1)
    {
        printf("%d\n", i);
        a = a * i;
    }

    printf("%d! = %d\n", num, a);
    return 0;
}