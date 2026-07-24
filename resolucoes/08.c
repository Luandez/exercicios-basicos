//Ler o ano atual e o ano de nascimento de uma pessoa
//dizer se está apta a votar ou não
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano_atual, nascimento;

    printf("Informe o ano atual: ");
    fflush(stdout);
    scanf("%d", &ano_atual);

    printf("Informe o seu ano de nascimento: ");
    fflush(stdout);
    scanf("%d", &nascimento);

    if (ano_atual - nascimento >= 16)
    {
        printf("Esta apto a votar\n");
    }
    else
    {
        printf("Ainda nao esta apto a votar\n");
    }
    return 0;
}