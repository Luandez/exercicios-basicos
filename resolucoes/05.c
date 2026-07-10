//Programa que você entra com o caracter
//Ele retorna o valor dele na tabela ascii
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char carac;
    printf("Entre com o valor do caracter: ");
    fflush(stdout);
    scanf(" %c", &carac);

    printf("O caracter %c na tabela ascii tem o valor %d\n", carac, carac);
    return 0;
}