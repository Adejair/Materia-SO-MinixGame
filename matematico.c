#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("Bem vindo ao Jogo de Raciocionio Logico Matematico !\n");
    printf("Criadores: Adejair Junior & Igor\n");

    int result = 0;
    int maxValue = 0;
    double c;

    int acertos = 0
        , erros = 0;


    printf("Digite o maior numero que pode ocorrer na sequencia do jogo: ex(20): (1+18) ou (18 /6)\n");
    scanf("%i", &maxValue);

    printf("VOCE PODE SAIR A QUALQUER MOMENTO DIGITANDO: -999\n");

    char operacoes[4] = {'+', '-', '/', '*'};
    do {
        int rand1 = (rand() % maxValue) + 1;
        int rand2 = (rand() % maxValue) + 1;

        int op = rand() % 4;

        printf("Qual o resultado de: %i %c %i: ", rand1, operacoes[op], rand2);
        scanf("%i", &result);

        switch(operacoes[op]) {
            case '+': {
                c = rand1 + rand2;
                break;
            }

            case '-': {
                c = rand1 - rand2;
                break;
            }

            case '*': {
                c = rand1 * rand2;
                break;
            }

            case '/': {
                c = rand1 / rand2;
                break;
            }
        }


        if(result == -999 && c != -999) {
            printf("voce caiu fora do jogo !!\n");

            if(acertos > erros) {
                printf("Voce eh um bom jogador !!");
            } else {
                printf("Voce joga muito mal :( ");
            }
            break;
        }


        if(result == c) {
         printf("Voce acertou o resultado!!\n ");
         ++acertos;
        } else {
            printf("Voce errou o resultado :(\n");
            ++erros;
        }

    } while(result != -999);

    system("clear");
    system("./menu");

    return 0;
}
