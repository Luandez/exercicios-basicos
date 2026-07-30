// imprimir os quadrados da sequencia de numeros nao nulos e suas condicoes
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, quad;

    while (1)
    {
        printf("\nDigite o valor do numero: ");
        fflush(stdout);
        scanf("%d", &num);

        if (num > 0)
        {
            quad = num * num;
            printf("\nO quadrado do numero %d = %d.\n", num, quad);
        }
        else if (num < 0)
        {
            printf("\nErro em numeros negativos.\n");
            continue;
        }
        else
        {
            printf("\nErro em numeros nulos.\n");
            break;
        }
    }
    printf("fim programa...");
    return 0;
}