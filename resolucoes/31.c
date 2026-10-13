//Leia um inteiro de 4 dígitos e imprima apenas o primeiro e o último dígito.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, resto;

    printf("Digite um numero inteiro de 4 algarismos: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int i = 0; i < 4; i++)
    {
        resto = num % 10;
        if (i == 0 || i == 3)
        {
            printf("O numero do indice [%d]: %d\n", i, resto);
        }
        num = num / 10;
    }

    return 0;
}