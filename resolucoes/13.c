//tentar criar a logica de um rpg com o heroi e vilao em combate
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void combat(int player, int npc_enemy)
{
    srand(time(NULL));
    int num;
    do
    {
        
        int damage = rand() % 11;
        num = rand() % 2;
        if (num == 1)
        {
            npc_enemy -= damage;
            printf("Dano sofrido pelo enemy [%d]\n", damage);
            printf("Vida npc_enemy: [%d]\n\n", npc_enemy);
        }
        else
        {
            player -= damage;
            printf("Dano sofrido pelo player: [%d]\n", damage);
            printf("Vida player: [%d]\n\n", player);
        }
    } while (npc_enemy >= 0 && player >= 0);
    printf("vida player %d - vida npc %d.\n", player, npc_enemy);
    if (npc_enemy <= 0)
    {
        printf("Você saiu vivo com %d de hp.\n", player);
    }
    else
    {
        printf("você morreu com %d de hp.\n", player);
    }
}

void escolher_guilda(char *nome, int tam)
{
    printf("Digite o seu nome: ");
    fflush(stdout);
    fgets(nome, tam, stdin);

    nome[strcspn(nome, "\n")] = '\0';
}

int main()
{
    int player = 20, npc_enemy = 20;
    char nome[20];

    combat(player, npc_enemy);
    escolher_guilda(nome, 20);
    printf("Nome: %s.\n", nome);
    return 0;
}