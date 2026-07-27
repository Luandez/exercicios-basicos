// exercio que imprime os valores visiveis de ascii que vão de 33 a 126
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 33; i < 127; i++)
    {
        printf("%d = %c\n", i, i);
    }
    return 0;
}