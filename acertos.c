#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int opt;
        printf("===================================\n");
        printf("Sistemas Operacionais - UNIRV\n");
        printf("\tJogo dos acertos\n");
        printf("Adejair Junior & Kaique\n ");
        printf("====================================\n");
        printf("DIGITE -999 PARA SAIR DO JOGO\n");
        printf("ACERTE O NUMERO RANDOMICO GERADO NA TELA E VENCA O JOGO !!\n");

        int intervalo;
        int erros = 0;

        printf("DIGITE O INTERVALO DO ACERTO 0-N\n");
        scanf("%i", &intervalo);



        int n = rand() % intervalo;

        printf("%i\n", n);


    do {

        scanf("%i", &opt);


        if(opt == n) {
            printf("voce venceeeeeeeeu !!!");
            printf("voce errou %i vezes antes de acertar\n", erros);
            break;
        }if(opt < n) {
            printf("O numero eh menorrr\n");
            ++erros;
        } else {
            printf("o numero eh maiorr\n");
            ++erros;
        }


    } while(opt != -999 || opt == n);

    system("clear");
    system("./menu");
    return 0;
}
