//triangulo vazado - apenas as bordas
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;

    for (int l = 1; l <= n; l++)
    {
        for (int esp = 1; esp <= n - l; esp++)
        {
            printf(" ");
        }
        for (int ast = 1; ast <= l; ast++)
        {
            if (((l == 3) && (ast == 2)) || ((l == 4) && (ast == 2) || (l == 4) && (ast == 3)))
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