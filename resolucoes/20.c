//Abra e grave uma entrada em um arquivo e feche
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;
    char palavra[20];

    pont_arq = fopen("Arquivo_palavra.txt", "w");

    //Verificando se o arquivo foi criado
    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }
    
    printf("Escreva uma palavra teste: ");
    fflush(stdout);
    scanf("%s", palavra);

    //uso o fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s", palavra);

    fclose(pont_arq);

    printf("Dados gravados com sucesso.\n");
    getchar();
    return 0;
}