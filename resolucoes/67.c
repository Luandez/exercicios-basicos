//jogo de adivinhacao
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, tentativas = 0, chute;

    srand(time(NULL));

    num = rand() % 11 + 1;

    while (chute != num)
    {
        printf("Tente acertar o valor: ");
        fflush(stdout);
        scanf("%d", &chute);

        if (chute == num)
        {
            tentativas++;
            break;
        }
        else if (chute > num)
        {
            printf("O chute foi maior do que o valor.\n");
            tentativas++;
        }
        else
        {
            printf("O chute foi menor do que o valor.\n");
            tentativas++;
        }
    }

    printf("Voce acertou o valor %d com %d tentativas.\n", num, tentativas);

    return 0;
}