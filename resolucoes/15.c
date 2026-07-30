#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool bi = 1;

    do
    {
        printf("Digite o valor de num: ");
        fflush(stdout);
        scanf("%d", &num);

        bi = (num > 0);
        printf("%d\n", bi);
        
    } while (num > 0);
    printf("fim programa...\n");
    return 0;
}