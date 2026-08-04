//Calcular a soma dos n primeiros numeros positivos
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, num, soma = 0;

    printf("digite um valor n: ");
    fflush(stdout);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor do n[%d]: ", i);
        fflush(stdout);
        scanf("%d", &num);

        soma += num;

    }
    printf("A soma dos valores: %d.\n", soma);
    printf("Fim programa...");
    return 0;
}