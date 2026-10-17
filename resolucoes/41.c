//Busca binária para encontrar o primeiro elemento maior que X
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, pos, elemento;
    bool achou = 0;

    printf("Informe um valor para buscar um elemento X maior: ");
    fflush(stdout);
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)    
    {
        if (nums[i] > x)
        {
            printf("O elemento %d é maior do que %d.\n", nums[i], x);
            elemento = nums[i];
            pos = i;
            achou = 1;
            break;
        }
    }

    if (achou == 1)
    {
        printf("O elemento maior do que [%d] está na posicao [%d] e tem o valor [%d].\n", x, pos, elemento);
    }
    else
    {
        printf("Não existe o elemento.\n");
    }

    return 0;
}