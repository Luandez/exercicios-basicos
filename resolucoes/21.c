//gravar caracteres usando um loop
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *pont_arq;
    char frase[50];
    int tamanho;

    pont_arq = fopen("Arquivo1.txt", "w");
    if (pont_arq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo");
        return 1;
    }

    printf("Digite a frase a ser gravada no arquivo: ");
    fflush(stdout);
    fgets(frase, sizeof(frase), stdin);

    //verifica a quantidade de caracteres na frase
    tamanho = strlen(frase);

    //grava caracter por caracter
    for (int i = 0; i < tamanho; i++)
    {
        fputc(frase[i], pont_arq);
    }

    fclose(pont_arq);
    printf("Programa finalizado...");
    return 0;
}