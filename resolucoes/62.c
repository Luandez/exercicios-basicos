/*
Economizar dinheiro se torna muito difícil em períodos de recessão, portanto as empresas podem reduzir seus limites de crédito para evitar que suas contas a receber (dinheiro que lhes é
devido) se tornem muito grandes. Em resposta a uma recessão prolongada, uma companhia reduziu o limite de crédito de seus clientes à metade. Desta forma, se um cliente tinha um
limite de crédito de $2000, agora seu limite passou a ser | $1000. Se um cliente tinha um limite de crédito de $5000, seu limite passou a ser $2500. Escreva um programa que analise a situação
do crédito de três clientes dessa companhia. De cada cliente você recebe:
1. O número de sua conta
2. Seu limite de crédito antes da recessão
3. Seu saldo atual (i.e., a quantia que o cliente deve à companhia).
Seu programa deve calcular e imprimir o novo limite de crédito de cada cliente e determinar (e
imprimir) | que clientes possuem saldos que excedem seus novos limites de crédito.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cod_cliente;
    float limit_cred, sald_atual, novo_limite;

    for (int i = 1; i <= 3; i++)
    {
        printf("Informe o numero da sua conta: ");
        fflush(stdout);
        scanf("%d", &cod_cliente);

        printf("Informe seu limite de credito: ");
        fflush(stdout);
        scanf("%f", &limit_cred);

        printf("Informe seu saldo atual: ");
        fflush(stdout);
        scanf("%f", &sald_atual);

        novo_limite = limit_cred / 2;

        printf("seu novo limite: [%.2f]\n", novo_limite);

        if (sald_atual > novo_limite)
        {
            printf("O cliente do codigo [%d] excedeu seu novo limite: [%.2f] - saldo atual: [%.2f].\n", cod_cliente, novo_limite, sald_atual);
        }

        if (i < 3)
        {
            printf("\t\tProximo cliente...\n\n");
        }
    }
}