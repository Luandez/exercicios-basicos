//Busca do maior e do menor valor e suas posicoes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void ler_valores(float valores[N])
{
    srand(time(NULL));
    valores[0] = rand() % 10 + 1;
    printf("Valor iniciado nas variaveis: %.2f\n", valores[0]);
    float maior = valores[0], menor = valores[0];
    int pos_maior = 0, pos_menor = 0;

    for (int i = 1; i < N; i++)
    {
        valores[i] = rand() % 10 + 1;
        printf("[%.2f] ", valores[i]);
        if (valores[i] > maior)
        {
            maior = valores[i];
            pos_maior = i;
        }
        if (valores[i] < menor)
        {
            menor = valores[i];
            pos_menor = i;
        }
    }

    printf("O maior valor é %.2f na posicao [%d] e o menor é %.2f na posicao [%d].\n", maior, pos_maior, menor, pos_menor);
}

int main(void)
{
    float valores[N];

    ler_valores(valores);
    return 0;
}