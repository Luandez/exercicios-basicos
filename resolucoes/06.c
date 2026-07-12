//Escreva um programa que leia o numero de maçãs compradas, calcule e escreva
//o custo total da compra
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int und_macas;
    float valor;
    printf("Quantas maçãs foram compradas: ");
    fflush(stdout);
    scanf("%d", &und_macas);

    if (und_macas < 6)
    {
        valor = und_macas * 1.30;
    }
    else if (und_macas >= 12)
    {
        valor = und_macas * 1;
    }
    printf("O custo total das %d maçãs compradas foram de %.2f.\n", und_macas, valor);
    return 0;
}