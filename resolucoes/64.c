/*
Escreva um programa que leia uma série de pares de números como se segue:
10 Número do produto
11 Quantidade vendida em um dia
Seu programa deve usar uma instrução switch para ajudar a determinar o preço de varejo de
cada produto. Seu programa deve calcular e mostrar o valor total a varejo de todos os produtos
vendidos na semana passada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double pro1 = 2.98, pro2 = 4.50, pro3 = 9.98, pro4 = 4.49, pro5 = 6.87;
    int cod_pro, qtd_vendas;
    double vendas_1 = 0, vendas_2 = 0, vendas_3 = 0, vendas_4 = 0, vendas_5 = 0;
    char cond;


    do
    {
        printf("Informe o codigo do produto para comprar: ");
        fflush(stdout);
        scanf("%d", &cod_pro);

        printf("Informe a quantidade vendida: ");
        fflush(stdout);
        scanf("%d", &qtd_vendas);


        switch (cod_pro)
        {
        case 1:
            vendas_1 += qtd_vendas * pro1;
            break;
        case 2:
            vendas_2 += qtd_vendas * pro2;
            break;
        case 3:
            vendas_3 += qtd_vendas * pro3;
            break;
        case 4:
            vendas_4 += qtd_vendas * pro4;
            break;
        case 5:
            if (cod_pro < 1 || cod_pro > 5)
            {
                printf("Selecione um valor valido.\n");
            }
            else
            {
                vendas_5 += qtd_vendas * pro5;
            }
            break;
        default:
            printf("Erro ao selecionar codigo do produto.\n");
            break;
        }

        printf("Continuar comprando: ");
        fflush(stdout);
        scanf(" %c", &cond);

    } while (cond == 's' || cond == 'S');

    printf("\tTabela vendas Varejo:\n Produto 1: %.2lf\n Produto 2: %.2lf\n Produto 3: %.2lf\n Produto 4: %.2lf\n Produto 5: %.2lf\n", vendas_1, vendas_2, vendas_3, vendas_4, vendas_5);

    return 0;
}