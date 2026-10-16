#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m5, m01;
    int resto, cont = 1;
    //variavel resto criada para calcular o valor das moedas

    printf("Digite um valor para o caixa analisar: ");
    fflush(stdout);
    scanf("%f", &valor);

    printf("Atualização dos valores por notas:\n");
    while (cont != 0)
    {
        printf("Valor caixa inicial = %.2f\n", valor);
        n100 = valor / 100;
        valor -= n100 * 100;
        printf("Valor caixa - 100 = %.2f\n", valor);
        n50 = valor / 50;
        valor -= n50 * 50;
        printf("Valor caixa - 50 = %.2f\n", valor);
        n20 = valor / 20;
        valor -= n20 * 20;
        printf("Valor caixa - 25= %.2f\n", valor);
        n10 = valor / 10;
        valor -= n10 * 10;
        printf("Valor caixa - 10 = %.2f\n", valor);
        n5 = valor / 5;
        valor -= n5 * 5;
        printf("Valor caixa - 5 = %.2f\n", valor);
        n2 = valor / 2;
        valor -= n2 * 2;
        printf("Valor caixa - 2 = %.2f\n", valor);
        printf("Calculo Moedas:\n");
        resto = (int)(valor * 100 + 0.5); //somar 0.5 garante que 72.999 vire 73.499, que ao ser convertido para inteiro vira 73
        m1 = resto / 100;
        resto %= 100;
        printf("Valor caixa - 1 real = %d\n", resto);
        m50 = resto / 50;
        resto %= 50;
        printf("Valor caixa - 50 centavos = %d\n", resto);
        m25 = resto / 25;
        resto %= 25;
        printf("Valor caixa - 25 centavos = %d\n", resto);
        m10 = resto / 10;
        resto %= 10;
        printf("Valor caixa - 10 centavos = %d\n", resto);
        m5 = resto / 5;
        resto %= 5;
        printf("Valor caixa - 5 centavos = %d\n", resto);
        m01 = resto / 1;
        resto %= 1;
        printf("Valor caixa - 1 centavo = %d\n", resto);
        cont = 0;
    }
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m01);
    return 0;
}