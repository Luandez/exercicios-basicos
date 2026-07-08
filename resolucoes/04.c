//Ler um valor e escrever se é positivo ou negativo(considere o valor zero como positivo).
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor;
    printf("Digite o valor para verificar: ");
    fflush(stdout);
    scanf("%d", &valor);

    if (valor >= 0)
    {
        printf("O valor %d é positivo.\n", valor);
    }
    else
    {
        printf("O valor %d é negativo.\n", valor);
    }
    return 0;
}