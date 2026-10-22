//exercicio 4.3 do livro do dei tel
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{  
    int soma = 0, x, i = 1;
    float num = 333.546372;
    float valor = 2.5;


    printf("somar os inteiros impares entre 1 e 99\n");
    for (int i = 1; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            soma += i;
        }
    }

    printf("Valor da soma dos impares entre 1 e 99: [%d]\n", soma);

    printf("O sinal '-' justifica à esquerda, '15' é a largura e '.X' é a precisão:\n");
    printf("%-15.1f\n", num);
    printf("%-15.2f\n", num);
    printf("%-15.3f\n", num);
    printf("%-15.4f\n", num);
    printf("%-15.5f\n", num);

    printf("Calcule o valor de 2,5 elevado ao cubo (potência 3) usando a função pow:\n");
    float calculo = pow(valor, 3);
    printf("resultado = %-2.10f\n", calculo);

    printf("Imprima os inteiros de 1 a 20 usando um loop while usando a variável x:\n");
    while (i <= 20)
    {
        x = i;
        printf("%d", i);
        if (x % 5 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
        i++;
    }

    printf("Imprima os inteiros de 1 a 20 usando um loop for usando a variavel x:\n");
    for (int i = 1; i <= 20; i++)
    {
        x = i;
        printf("%d", i);
        
        if (x % 5 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
    }


    return 0;
}