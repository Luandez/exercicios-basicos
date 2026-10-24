//quadrado vazado
/*
*****
*   *
*   *
*   *
*****
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Informe o valor de n para o quadrado vazado: ");
    fflush(stdout);
    scanf("%d", &n);

    for (int l = 1; l <= n; l++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (l == 1 || l == n || c == 1 || c == n) // n é a ultima posicao - limite
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}