//imprimir caracter e valor ascii
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char num;

    printf("Informe um valor char: ");
    fflush(stdout);
    scanf(" %c", &num);

    printf("ascii = [%d]\n", num);
    printf("caracter = [%c]\n", num);
    return 0;
}