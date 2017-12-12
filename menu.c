#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opt;

    do {


        printf("============= MENU ================\n");
        printf("Trabalho de Sistemas Operacionais \n");
        printf("Alunos: Adejair Junior & Kaique \n");
        printf("====================================\n");
        printf("Escolha o Jogo para ser executado:\n");
        printf("1) Jogo de Raciocionio Matematico\n");
        scanf("%i", &opt);

        switch(opt) {
            case 1: {
                system("./matematico");
                break;
            }
        }

    } while((opt < 1) || (opt > 2));
    return 0;
}
