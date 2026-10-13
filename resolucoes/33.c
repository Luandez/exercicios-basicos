//Leia um inteiro de 3 dígitos e aplique (dígito + 3) % 10 em cada dígito, imprimindo o resultado
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, result, resto;

    printf("Entre com um inteiro de 3 algarismos: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int i = 0; i < 3; i++)
    {
        resto = num % 10;
        result = (resto + 3) % 10;
        printf("%d ", result);
        num = num / 10;
    }

    printf("\n");
    return 0;
}