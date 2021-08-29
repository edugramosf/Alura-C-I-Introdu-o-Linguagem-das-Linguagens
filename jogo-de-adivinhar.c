#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();    

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;


    while (1)
    {

        printf("\nTentativa %d\n", tentativas);
        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            printf("Tente novamente.\n");

            continue;
        }
        
        printf("\nSeu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou){
            printf("Parabéns! Você acertou!\n");
            
            break;
        }

        else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else {
                printf("Seu chute foi menor que o número secreto\n");
            }

            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;
    }

    printf("\nFim de jogo!\n");
    printf("\nVocê acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
}