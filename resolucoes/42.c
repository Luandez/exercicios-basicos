//Encontrar a primeira e a última posição
#include <stdio.h>
#include <stdlib.h>

void ler_valores(int *nums, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < 12; i++)
    {
        printf("Informe um numero inteiro - posicao [%d]: ", i);
        fflush(stdout);
        scanf("%d", &nums[i]);
        
        if (nums[i] == x)
        {
            if (first == -1)
            {
                    first = i;
            }
            last = i;
        }
    }

    if (first != -1)
    {
        printf("A primeira posicao que [%d] aparece: [%d]\n", x, first);
        printf("a ultima posicao que [%d] aparece: [%d]\n", x, last);
    }
    else
    {
        printf("O valor [%d] nao foi encontrado.\n", x);
    }

}

int main(void)
{
    int nums[12], x;

    printf("Informe um valor X: ");
    fflush(stdout);
    scanf("%d", &x);

    ler_valores(nums, x);
    return 0;
}