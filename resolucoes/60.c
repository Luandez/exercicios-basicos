//Encontrar o maior número posicao
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int nums[10];
    int valor_busca, maior_posicao = 0, maior_valor = 0;
    bool cond = false;

    srand(time(NULL));

    printf("Informe um valor: ");
    fflush(stdout);
    scanf("%d", &valor_busca);

    for (int i = 0; i < 10; i++)
    {
        nums[i] = rand() % 10 + 1;
        printf("[%d] ", nums[i]);

        if (nums[i] > maior_valor)
        {
            maior_posicao = i;
            maior_valor = nums[i];
        }

        if (valor_busca == nums[i])
        {
            cond = true;
        }
    }

    printf("\n");
    if (cond == true)
    {
        printf("O valor %d está no vetor e no vetor o maior valor é [%d] na posicao [%d].\n", valor_busca, maior_valor, maior_posicao);
    }
    else
    {
        printf("O valor %d nao foi encontrado no vetor.\n", valor_busca);
    }

    return 0;
}