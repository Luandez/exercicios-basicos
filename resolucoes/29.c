//leia um inteiro de 4 digitos e imprima a soma deles
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, resto, soma_digito = 0;

    printf("Digite um numero inteiro de 4 digitos: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int i = 0; i < 4; i++)
    {
        resto = num % 10;
        printf("Digito: %d\n", resto);
        soma_digito += resto;
        printf("Acumulado: %d\n", soma_digito);
        num = num / 10;
    }

    printf("Valor da soma dos digitos: %d\n", soma_digito);
    return 0;
}