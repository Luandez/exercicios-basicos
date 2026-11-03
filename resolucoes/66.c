//programa que converte de decimal para binario
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int num = 20, resto, binario, mult = 1;

    while (num > 0)
    {
        resto = num % 2;
        num = num / 2;
        binario += resto * mult;
        mult *= 10;
    }

    printf("%d\n", binario);

    return 0;
}