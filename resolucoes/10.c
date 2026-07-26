//vetor na ordem invertida
#include <stdio.h>
#include <stdlib.h>

void leitura(int n, int vetor[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor [%d]: ", i);
        fflush(stdout);
        scanf("%d", &vetor[i]);
    }
    printf("\nValores do vetor original.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void invertendo(int n, int vetor[n])
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int n;

    printf("Digite o valor de N: ");
    fflush(stdout);
    scanf("%d", &n);

    int valores[n];

    printf("Fazendo a leitura dos valores do vetor:\n");
    leitura(n, valores);
    printf("\n");
    printf("\nInvertendo os valores do vetor:\n");
    invertendo(n, valores);
    return 0;
}