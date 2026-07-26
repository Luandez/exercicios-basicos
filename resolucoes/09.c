// funcao que recebe dois numeros e retorna o maior deles
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int a, b;

    do
    {
        printf("Digite o valor de A: ");
        fflush(stdout);
        scanf("%d", &a);

        printf("Digite o valor de B: ");
        fflush(stdout);
        scanf("%d", &b);
    } while (a == b);
    
    int resultado = maior(a, b);
    if (a > b)
    {
        printf("O maior valor está na variavel A = %d.\n", resultado);
    }
    else
    {
        printf("o maior valor está na variavel B: %d.\n", resultado);
    }
    return 0;
}