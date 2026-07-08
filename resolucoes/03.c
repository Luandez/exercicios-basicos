//Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrario escrever NÃO É MAIOR QUE 10!
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor;

    printf("Entre com o valor: ");
    fflush(stdout);
    scanf("%d", &valor);

    if (valor > 10)
    {
        printf("O valor %d é maior que 10.\n", valor);
    }
    else if (valor < 10)
    {
        printf("O valor %d é menor do que 10.\n", valor);
    }
    else
    {
        printf("O valor %d é igual a 10.\n", valor);
    }
    return 0;
}