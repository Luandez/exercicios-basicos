//Encontrar todos os índices
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nums[15], vetor_reserva[15], qtd_valores = 0, valor_busca;

    srand(time(NULL));

    printf("Informe um valor para buscar: ");
    fflush(stdout);
    scanf("%d", &valor_busca);

    for (int i = 0; i < 15; i++)
    {
        nums[i] = rand() % 10 + 1;
        printf("[%d] ", nums[i]);

        if (nums[i] == valor_busca)
        {
            vetor_reserva[qtd_valores] = i;
            qtd_valores++;
        }
    }

    printf("\n");

    if (qtd_valores > 0)
    { 
        printf("A posicao encontrada do valor [%d]\n", valor_busca);
        for (int i = 0; i < qtd_valores; i++)
        {
            printf("[%d] ", vetor_reserva[i]);
        }
    }
    else
    {
        printf("Nenhum valor encontrado.\n");
    }

    return 0;
}