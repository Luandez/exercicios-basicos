//Imprima a borda de um quadrado, deixando o interior vazio
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;

    for (int l = 1; l <= n; l++)
    {
        for (int ast = 1; ast <= n; ast++)
        {
            if ((l != 1 && l != n) && (ast != 1 && ast != n))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}