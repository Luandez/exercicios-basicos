//teste switch
#include <stdio.h>
#include <stdlib.h>

void calculo_valor(float num1, float num2, int operacao)
{   
    float resultado;
    switch (operacao)
    {
        case 1:
            resultado = num1 + num2;
            printf("%.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("%.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("%.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("%.2f\n", resultado);
            }
            else
            {
                printf("Erro divisao por zero.\n");
            }
            break;
        default:
            printf("Valor selecionado invalido.\n");
            break;
    }
}

int main(void)
{
    float num1, num2;
    int operacao;

    printf("selecao dos valores:\n");
    printf("Informe o primeiro valor: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Informe o segundo valor: ");
    fflush(stdout);
    scanf("%f", &num2);

    printf("Seleciona a operacao a realizar: ");
    fflush(stdout);
    scanf("%d", &operacao);

    calculo_valor(num1, num2, operacao);
    return 0;
}