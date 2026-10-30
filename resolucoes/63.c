/*
Uma aplicação interessante dos computadores é para desenhar gráficos de linhas e de barras
(chamados algumas vezes "histogramas"). Escreva um programa que leia cinco números (cada
um deles entre 1 e 30). Para cada número lido, seu programa deve imprimir uma linha contendo
aquele número de asteriscos adjacentes. Por exemplo, se seu programa ler o número sete, deve
imprimir *******.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i = 1;

    printf("Faz a leitura dos 5 numeros para imprimir (n *).\n");

    while (i <= 5)
    {
        printf("Informe um valor n entre 1 - 30: ");
        fflush(stdout);
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }

        i++;
        printf("\n");
    }

    return 0;
}