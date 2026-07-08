//Faça um algoritmo que leia três notas de um aluno, calcule e escreva a media final deste aluno.
//considerar que a média é ponderada e que peso das notas é 2, 3 e 5.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, n3, media_final;

    printf("Digite o valor da nota 1: ");
    fflush(stdout);
    scanf("%f", &n1);
    
    printf("Digite o valor da nota 2: ");
    fflush(stdout);
    scanf("%f", &n2);

    printf("Digite o valor da nota 3: ");
    fflush(stdout);
    scanf("%f", &n3);

    media_final = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
    printf("A media final do aluno: %.2f.\n", media_final);
    return 0;
}