//piramide
/*
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Informe o valor de N: ");
    fflush(stdout);
    scanf("%d", &n);

    for (int l = 1; l <= n; l++)
    {
        for (int esp = n - l; esp > 0; esp--)
        {
            printf(" ");
        }
        for (int c = 1; c <= l; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}