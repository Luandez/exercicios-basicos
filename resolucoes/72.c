//Exemplo de busca binaria com os valores do vetor ja ordenado - apenas mostrar a posicao do valor alvo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
   int vetor[] = {1, 2, 3, 4, 5};
   int alvo = 4;
   int e = 0;
   int d = (sizeof(vetor) / sizeof(vetor[0])) - 1;

   while (e <= d)
   {
    int m = (e + d) / 2;

    if (vetor[m] > alvo)
    {
        d = m - 1;
    }
    else if (vetor[m] < alvo)
    {
        e = m + 1;
    }
    else
    {
        printf("Posicao %d\n", m);
        return 1;
    }
   }

   return 0;
}