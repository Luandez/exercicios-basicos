//Programa que faz a criptogafria de um valor
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dado_original, dado_criptografado = 0, i = 1, resto;

    printf("Escreva um valor de 5 algarismos: ");
    fflush(stdout);
    scanf("%d", &dado_original);

    while (i < 6)
    {
        resto = (dado_original % 10) + 7;
        printf("Resto = %d\n", resto);
        dado_criptografado = (dado_criptografado * 10) + resto;
        dado_original = dado_original / 10;
        i++;
    }

    printf("Valor %d\n", dado_criptografado);
    return 0;
}