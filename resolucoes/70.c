//encontrar numeros duplicados
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    float salario_gerentes, salario_hora_comum, salario_func_comum, vendas_brutas_comissao, salario_comissionado, salario_empreitada_item;
    int horas_trabalhadas_comum, cod_pagamento,itens_empreitada;

    printf("Informe o salario fixo mensal dos gerentes: ");
    fflush(stdout);
    scanf("%f", &salario_gerentes);

    printf("Qual o salario fixo por hora do funcionario comum: ");
    fflush(stdout);
    scanf("%f", &salario_hora_comum);

    printf("Quantas horas o funcionario comum trabalhou?: ");
    fflush(stdout);
    scanf("%d", &horas_trabalhadas_comum);

    printf("Quanto vendeu bruto de comissao o funcionario de comissao: ");
    fflush(stdout);
    scanf("%f", &vendas_brutas_comissao);

    printf("Qual o salario por item do funcionario por empreitada: ");
    fflush(stdout);
    scanf("%f", &salario_empreitada_item);

    printf("Quantos itens o funcionario da empreitada usou: ");
    fflush(stdout);
    scanf("%d", &itens_empreitada);

    printf("Informe o codigo de pagamento do funcionario (1 - Gerente | 2 - Funcionario comum | 3 - Funcionario comissionado | 4 - Funcionario empreitada): ");
    fflush(stdout);
    scanf("%d", &cod_pagamento);

    switch (cod_pagamento)
    {
        case 1:
            printf("O gerente recebeu um salario de %.2f reais.\n", salario_gerentes);
            break;
        case 2:
            if (horas_trabalhadas_comum <= 40)
            {
                salario_func_comum = horas_trabalhadas_comum * salario_hora_comum;
                printf("O funcionario comum recebeu um salario de %.2f reais por %d horas trabalhadas.\n", salario_func_comum, horas_trabalhadas_comum);
            }
            else
            {
                int horas_extras = horas_trabalhadas_comum - 40;
                float salario_extra = horas_extras * salario_hora_comum * 1.5;
                salario_func_comum = (horas_trabalhadas_comum - horas_extras) * salario_hora_comum + salario_extra;
                printf("O funcionario trabalhou %d horas e recebeu um salario de %.2f reais mais horas extras.\n", horas_trabalhadas_comum, salario_func_comum);
            }
            break;
        case 3:
            if (vendas_brutas_comissao > 0)
            {
                salario_comissionado = vendas_brutas_comissao * 0.057 + 250;
                printf("O funcionario comissionado vai receber de salario mais comissao: %.2f\n", salario_comissionado);
            }
            else
            {
                printf("O funcionario nao teve vendas e recebeu apenas o salario de R$ 250\n");
            }
            break;
        case 4:
            if (itens_empreitada > 0)
            {
                float salario_func_empreitada = salario_empreitada_item * itens_empreitada;
                printf("O funcionario por empreitada recebeu um salario de R$ %.2f.\n", salario_func_empreitada);
            }
            else
            {
                printf("O funcionario por empreitada nao produziu nenhum item esse mes e nao recebera.\n");
            }
            break;
        default:
            printf("Escolha um codigo de funcionario valido.\n");
            break;
    }

    return 0;
}