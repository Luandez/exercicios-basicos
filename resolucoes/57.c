/*
Receba 10 números inteiros e peça um número para procurar.
- Informe quantas vezes ele aparece no vetor.
- Se não aparecer nenhuma vez, mostre uma mensagem adequada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
    int num[10];
    int valor, qtd = 0;
    char cond;

    //int tam = sizeof(num) / sizeof(num[0]);

    srand(time(NULL));

    do
    {
        printf("Informe um valor para procurar: ");
        fflush(stdout);
        scanf("%d", &valor);

        for (int i = 0; i < 10; i++)
        {
            num[i] = rand() % 10 + 1;
            printf("[%d] ", num[i]);

            if (valor == num[i])
            {
                qtd++;
            }
        }

        printf("continuar? (s - n): ");
        fflush(stdout);
        scanf(" %c", &cond);
    } while (cond != 'n');

    if (qtd > 0)
    {
        printf("\nO valor %d aparece %d vezes.\n", valor, qtd);
    }
    else
    {
        printf("O valor %d nao aparece nenhuma vez.\n", valor);
    }

    return 0;
}