//lendo arquivo
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;
    char texto_str[20];

    pont_arq = fopen("Arquivo2.txt", "r");

    //usei o loop para ler o arquivo ate o fim e imprimir a string
    while (fgets(texto_str, 20, pont_arq) != NULL)
    {
        printf("%s", texto_str);
    }

    fclose(pont_arq);
    system("pause");
    return 0;
}