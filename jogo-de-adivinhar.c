#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

printf("\n\n\n\n\n");
 printf("                                |ZZzzz                                       \n");
 printf("                                |                                            \n");
 printf("                                |                                            \n");
 printf("                   |ZZzzz      /^\\            |ZZzzz                        \n"); 
 printf("                   |          |~~~|           |                              \n");
 printf("                   |        |^^^^^^^|        / \\           Bem-vindo ao     \n");
 printf("               /^\\       |[]+    |       |~~~|      Jogo de Adivinhação!    \n");
 printf("               |^^^^^^^|    |    +[]|       |   |                            \n");
 printf("               |    +[]|/\\/\\/\\/\\^/\\/\\/\\/\\/|^^^^^^^|                  \n");
 printf("               |+[]+   |~~~~~~~~~~~~~~~~~~|    +[]|                          \n");
 printf("               |       |  []   /^\\   []   |+[]+   |                         \n");
 printf("               |   +[]+|  []  || ||  []   |   +[]+|                          \n");
 printf("               |[]+    |      || ||       |[]+    |                          \n");
 printf("               |_______|------------------|_______|                          \n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("\n\nQual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;

    case 2:
        numerodetentativas = 15;
        break;
            
    default:
        numerodetentativas = 6;
        break;
    }

    for (int i = 1; i <= numerodetentativas; i++)
    {

        printf("\nTentativa %d\n", tentativas);
        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos!\n");
            printf("Tente novamente.\n");

            continue;
        }

        printf("\nSeu chute foi %d\n", chute);

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou)
        {
            printf("Parabéns! Você acertou!\n");

            break;
        }

        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("\n\nFim de jogo!\n\n");

    if (acertou)
    {

        printf("      _.-'''''-._        \n");       
        printf("    .'  _     _  '.      \n");
        printf("   /   (o)   (o)   \\    \n");
        printf("  |                 |    \n");
        printf("  |  \\           /  |   \n");
        printf("   \\  '.       .'  /    \n");
        printf("    '.  `'---'`  .'      \n");
        printf("      '-._____.-'        \n");
        
        printf("\nVocê ganhou!\n");
        printf("\nVocê acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("Você perdeu! Tente novamente!\n\n");
        printf("\n\n");
        printf("    \\|/ ____ \\|/    \n");   
        printf("     @~/ ,. \\~@      \n");   
        printf("    /_( \\__/ )_\\    \n");   
        printf("       \\__U_/        \n");
        printf("\n\n\n\n\n");
    }
}