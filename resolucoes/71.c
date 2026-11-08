//Desenhar um losango
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int linhas;

    printf("Informe quantas linhas o programa deve ter: ");
    fflush(stdout);
    scanf("%d", &linhas);

    for (int l = 1; l <= linhas; l++)
    {
        for (int esp = 1; esp <= linhas - l; esp++)
        {
            printf(" ");
        }
        for (int ast = 1; ast <= l; ast++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int l = linhas; l >= 1; l--)
    {
        for (int esp = 1; esp <= linhas - l; esp++)
        {
            printf(" ");
        }
        for (int ast = 1; ast <= l; ast++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}