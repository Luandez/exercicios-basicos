// /Leia um inteiro de 5 dígitos e verifique se ele é palíndromo (ex.: 12321)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_original, num_invertido = 0, num_salvo, resto;

    printf("Digite um numero de 5 algarismos: ");
    fflush(stdout);
    scanf("%d", &num_original);

    num_salvo = num_original;

    for (int i = 0; i < 5; i++)
    {
        resto = num_original % 10;
        num_invertido = (num_invertido * 10) + resto;
        num_original = num_original / 10;
    }

    if (num_invertido == num_salvo)
    {
        printf("O numero digitado é um palindromo [%d]\n", num_invertido);
    }
    else
    {
        printf("Numero verificado não é palindromo.\n");
    }
    
    printf("O numero invertido e o original: [%d] - [%d]\n", num_invertido, num_salvo);
    return 0;
}