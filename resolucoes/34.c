//Leia um inteiro de 2 dígitos e troque os dois dígitos de posição
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 12, resto = 0, num_invertido;

    for (int i = 0; i < 2; i++)
    {
        resto = num % 10;
        num_invertido = (num_invertido * 10) + resto;
        num = num / 10;
    }

    printf("O numero invertido: %d\n", num_invertido);
    return 0;
}