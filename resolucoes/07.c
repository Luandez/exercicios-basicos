//calcular a média aritmetica simples e escrever se o aluno foi aprovado ou reprovado
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a1, a2, media;
    printf("Primeira avaliação: ");
    fflush(stdout);
    scanf("%d", &a1);

    printf("Segunda avaliação: ");
    fflush(stdout);
    scanf("%d", &a2);

    media = (a1 + a2) / 2;
    
    if (media >= 6)
    {
        printf("o aluno foi aprovado com a media: %d.\n", media);
    }
    else
    {
        printf("o aluno foi reprovado com a média: %d.\n", media);
    }
    return 0;
}