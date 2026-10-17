//dia da semana
#include <stdio.h>
#include <stdlib.h>

void day_week(int day)
{
    switch (day)
    {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda - feira\n");
            break;
        case 3:
            printf("terça - feira\n");
            break;
        case 4:
            printf("Quarta - feira\n");
            break;
        case 5:
            printf("Quinta - feira\n");
            break;
        case 6:
            printf("Sexta - feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia invalido\n");
            break;
    }
}

int main(void)
{
    int day;
    int condicao = 1;

    while (condicao != 0)
    {
        printf("Entre com um dia da semana (1 - 7): ");
        fflush(stdout);
        scanf("%d", &day);

        day_week(day);

        printf("Continuar? (1 - 0): ");
        fflush(stdout);
        scanf("%d", &condicao);
    }

    return 0;
}