/*
Programa que lê um número natural n do teclado e imprime todos os divisores
desse número. Ao final, imprima também a soma dos divisores encontrados.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma_div = 0, div = 1;

    printf("Digite um n valor: ");
    fflush(stdout);
    scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            if (n % div == 0)
            {
                printf("O valor %d é divisivel por %d.\n", n, div);
                soma_div += div;
            }
            else
            {
                printf("%d nao é divisivel por %d.\n", n, div);
            }
            div++;
        }

    printf("A soma dos divisores: %d.\n", soma_div);
    return 0;
}