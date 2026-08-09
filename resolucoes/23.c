// ler caracter por caracter em arquivos
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq_pont;
    int c;

    arq_pont = fopen("Arquivo1.txt", "r");
    if (arq_pont == NULL)
    {
        printf("Erro ao tentar abrir arquivo.\n");
        exit(1);
    }
    printf("Exibindo e lendo os dados.\n");

    do
    {
        // faz a leitura do caracter apontado por pont_arq
        c = fgetc(arq_pont);

        // imprime o caracter lido
        printf("%c", c);
    } while (c != EOF);

    fclose(arq_pont);
    system("pause");
    return 0;
}