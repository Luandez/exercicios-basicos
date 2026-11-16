//encontrando um numero
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    int vetor[10];
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int d = tam - 1, e, encontrado = -1;
    int alvo;

    srand(time(NULL));

    printf("Valores gerados aleatoriamente:\n");
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 100 + 1;
        printf("[%d] ", vetor[i]);
    }

    //Ordenando os valores em ordem crescente
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nValores ordenados em ordem crescente:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("[%d] ", vetor[i]);
    }

    printf("\nEscolha um valor para a busca binaria: ");
    fflush(stdout);
    scanf("%d", &alvo);

    printf("\n");
    printf("busca binaria:");
    while (e <= d) {
        int m = e + (d - e) / 2;

        if (vetor[m] == alvo) {
            encontrado = m;
            break;
        } else if (vetor[m] < alvo) {
            e = m + 1;
        } else {
            d = m - 1;
        }
    }

    if (encontrado != -1) {
        printf("\nValor %d encontrado na posicao: %d\n", alvo, encontrado);
    } else {
        printf("\nValor %d nao encontrado no vetor.\n", alvo);
    }

    return 0;
}