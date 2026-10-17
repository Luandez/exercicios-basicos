//Contando os conceitos
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grau;
    int aConta = 0, bConta = 0, cConta = 0, dConta = 0, fConta = 0;

    printf("Entre com os conceitos:\n");
    printf("Entre com o caractere EOF(fim) para finalizar as entradas.\n");

    while ((grau = getchar()) != EOF || '\n')
    {
        switch (grau)
        {
            case 'A':
            case 'a':
                aConta++;
                break;
            case 'B':
            case 'b':
                bConta++;
                break;
            case 'C':
            case 'c':
                cConta++;
                break;
            case 'D':
            case 'd':
                dConta++;
                break;
            case 'F':
            case 'f':
                fConta++;
                break;
            case '\n':
            case ' ':
                break;
            default:
                printf("fornecido um conceito incorreto.\n");
                printf("Entre com um novo conceito.\n");
                break;
            
        }
    }

    printf("\nOs totais de cada conceito:\n");
    printf("A: %d\n", aConta);
    printf("B: %d\n", bConta);
    printf("C: %d\n", cConta);
    printf("D: %d\n", dConta);
    printf("F: %d\n", fConta);
    return 0;
}