#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[15] = {2, 1, 3, 4, 5, 6, 7, 8, 9, 1, 11, 12, 13, 14, 15};
    int num, prim, ultim, qtd = 0;

    printf("Informe um numero: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int i = 0; i < 15; i++)
    {
        if (num == vetor[i] && qtd < 1)
        {
            prim = i;
            qtd++;
        }

        if (num == vetor[i])
        {
            ultim = i;
        }
    }

    printf("Primeira  posicao [%d] e ultima posicao [%d]\n", prim, ultim);
    
    return 0;
}