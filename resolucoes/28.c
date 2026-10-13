//leia um inteiro de 3 digitos e imprima cada digito separadamente (centena, dezena, unidade)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num, resto = 0, casas[3] = {1, 10, 100};

    printf("Digite um inteiro de 3 algarismos: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int i = 0; i < 3; i++)
    {
        resto = num % 10;
        casas[i] *= resto;
        num = num / 10;
    }

    for (int i = 2; i >= 0; i--)
    {
        printf("%d ", casas[i]);
    }

    return 0;
}