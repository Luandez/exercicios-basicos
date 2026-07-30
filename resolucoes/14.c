// programa que lê um valor, um operador (+, -, *, /), outro valor e imprime o resultado
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int v1, v2, result;
    char simbol, contin;

    do
    {
        printf("Digite o primeiro valor: ");
        fflush(stdout);
        scanf("%d", &v1);

        printf("Digite o operador (+, -, *, /): ");
        fflush(stdout);
        scanf(" %c", &simbol);

        printf("Digite o segundo valor: ");
        fflush(stdout);
        scanf("%d", &v2);

        switch (simbol)
        {
        case '+':
            result = v1 + v2;
            printf("A operacao escolhida foi \"%c\" e o resultado da operação %d %c %d = %d.\n", simbol, v1, simbol, v2, result);
            break;
        case '-':
            result = v1 - v2;
            printf("A operacao escolhida foi \"%c\" e o resultado da operação %d %c %d = %d.\n", simbol, v1, simbol, v2, result);
            break;
        case '*':
            result = v1 * v2;
            printf("A operacao escolhida foi \"%c\" e o resultado da operação %d %c %d = %d.\n", simbol, v1, simbol, v2, result);
            break;
        case '/':
            if (v1 != 0 && v2 != 0)
            {
                result = v1 / v2;
                printf("A operacao escolhida foi \"%c\" e o resultado da operação %d %c %d = %d.\n", simbol, v1, simbol, v2, result);
                break;
            }
            else
            {
                printf("Não pode ser divisão por zero.\n");
                break;
            }
        default:
            printf("Escolha um operador válido.\n");
            break;
        }
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nContinuar? ");
        fflush(stdout);
        scanf(" %c", &contin);
    } while (contin != 'n');
    printf("Programa encerrado.\n");
    return 0;
}