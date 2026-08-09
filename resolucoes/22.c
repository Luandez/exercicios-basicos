//gravar string no arquivo de texto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   FILE *pont_arq;
   int r;

   pont_arq = fopen("Arquivo1.txt", "w");
    if (pont_arq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo.\n");
        exit(1);
    }
    //gravando a string no arquivo
    r = fputs("Programando em linguagem C.\n", pont_arq);

    //verifica se os dados foram gravados com sucesso
    if (r == EOF)
    {
        printf("Erro ao tentar gravar os dados.\n");
    }
    else
    {
        printf("dados gravados com sucesso.\n");
    }

    fclose(pont_arq);
    getchar();
    return 1;
}