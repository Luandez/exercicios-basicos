#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int valor;
    int pos_menor, pos_maior;

    printf("Informe um valor: ");
    fflush(stdout);
    scanf("%d", &valor);

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um valor para validar: ");
        fflush(stdout);
        scanf("%d", &num[i]);

        if (valor == num[i] && i < pos_menor)
        {
            pos_menor = i;
        }
        if (valor == num[i] && i > pos_maior)
        {
            pos_maior = i;
        }
    }

    printf("A menor posicao [%d] e a maior posicao [%d].\n", pos_menor, pos_maior);

    return 0;
}