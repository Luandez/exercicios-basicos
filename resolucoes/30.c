//Leia um inteiro de 4 dígitos e imprima o número invertido (ex.: 1234 → 4321)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_original, algarismo, num_invertido = 0, valores;

    printf("Digite um numero: ");
    fflush(stdout);
    scanf("%d", &num_original);

    for (int i = 0; i < 4; i++)
    {
        algarismo = num_original % 10;
        num_invertido = (num_invertido * 10) + algarismo; //Ex: 4 * 10 = 40 + resto = 40 + 3 = 43
        num_original = num_original / 10;
    }

    printf("%d\n", num_invertido);
    return 0;
}