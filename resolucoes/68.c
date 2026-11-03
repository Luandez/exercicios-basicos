//sistema de notas
//cadastrar notas de alunos
//calcular medias
//identificar aprovados e reprovados
//encontrar a maior e a menor nota

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nota, soma_notas = 0, alunos, cont = 0, media = 0, menor_nota, maior_nota = 0;

    printf("Quantos alunos tem na sala: ");
    fflush(stdout);
    scanf("%d", &alunos);

    while (alunos > 0)
    {
        printf("Informe a nota do aluno: ");
        fflush(stdout);
        scanf("%d", &nota);

        if (nota > maior_nota)
        {
            maior_nota = nota;
        }
        if (nota < menor_nota)
        {
            menor_nota = nota;
        }

        soma_notas += nota;

        cont++;
        alunos--;
    }

    media = soma_notas / cont;

    printf("A media = %d\n", media);
    printf("Menor nota: %d\n", menor_nota);
    printf("Maior nota: %d\n", maior_nota);

    return 0;
}