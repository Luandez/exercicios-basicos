//busca binaria classica
#include <stdio.h>
#include <stdlib.h>

void ler_valores(int *num)
{
    printf("Digite 10 valores inteiros em ordem crescente:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor na posicao [%d]: ", i);
        fflush(stdout);
        scanf("%d", &num[i]);
    }
}

void conta_valor(int *num, int x)
{
    int contagem = 0;
    for (int i = 0; i < 10; i++)
    {
        if (x == num[i])
        {
            printf("O valor %d esta na posicao: [%d]\n",x, i);
            contagem++;
        }
    }

    printf("O valor %d apareceu %d vezes.\n", x, contagem);
}

int main(void)
{
    int num[10], x = 4;

    ler_valores(num);
    conta_valor(num,x);
    return 0;
}