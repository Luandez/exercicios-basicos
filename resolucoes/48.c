/*
Escreva instruções for que imprimam as seguintes series de valores:
a) 1,2,3,4,5,6,7
b) 3,8,13,18,23
c) 10,14,8,2,-4,-10
d) 19, 27,35,43,51
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    printf("Primeira série de valores:\n");

    for (int i = 1; i <= 7; i++)
    {
        printf("%d", i);
        if (i != 7)
        {
            printf(",");
        }
        else
        {
            printf(".\n");
        }
    }

    printf("Segunda série de valores:\n");

    for (int i = 3; i <= 23; i += 5)
    {
        printf("%d", i);
        if (i != 23)
        {
            printf(",");
        }
        else
        {
            printf(".\n");
        }
    }

    printf("Terceira série de valores:\n");

    for (int i = 10; i >= -10; i -= 6)
    {
        printf("%d", i);
        if (i == 10)
        {
            i += 4;
            printf(",%d", i);
        }

        if (i > -10)
        {
            printf(",");
        }
        else
        {
            printf(".\n");
        }
    }

    printf("Quarta série de valores:\n");

    for (int i = 19; i <= 51; i += 8)
    {
        printf("%d", i);

        if (i < 51)
        {
            printf(",");
        }
        else
        {
            printf(".\n");
        }
    }

    return 0;
}