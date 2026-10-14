//busca simples em vetor de inteiros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int conta_valores(int n, int vetor[n], int x)
{
    int cont = 0;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand() % 10 + 1;
        printf("[%d] ", vetor[i]);
        if (x == vetor[i])
        {
            cont++;
        }
    }

    return cont;
}

int main(void)
{
    int n = 10, vetor[n], x = 5;

    int resultado = conta_valores(n, vetor, x);

    printf("O numero %d aparece %d vezes.\n", x, resultado);
    return 0;
}