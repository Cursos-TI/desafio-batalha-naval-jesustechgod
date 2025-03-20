#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    char linhax[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //criando tabulero
    int tabuleiro[LINHAS][COLUNAS] = {0};

    printf(" TABULEIRO BATALHA NAVAL \n\n");

    for (int j = 0; j < 10; j++){
        printf("  %c", linhax[j]);
    }
    printf("\n");

    for (int x = 0; x < LINHAS; x++) { // Loop para linhas
        printf("%d", x + 1);
        for (int y = 0; y < COLUNAS; y++) { // Loop para colunas
            printf(" %d ", tabuleiro[x][y]);
        }
        printf("\n");
    }
    //NAVIO NA HORIZONTAL
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    //NAVIO NA VERTICAL
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    printf("\nTABULEIRO COM OS NAVIOS POSICIONADOS:\n\n");

    for (int j = 0; j < 10; j++){
        printf("  %c", linhax[j]);
    }
    printf("\n");

    for (int x = 0; x < LINHAS; x++) { // Loop para linhas
        printf("%d", x + 1);
        for (int y = 0; y < COLUNAS; y++) { // Loop para colunas
            printf(" %d ", tabuleiro[x][y]);
        }
        printf("\n");
    }
    printf("\n");

    printf("navio que esta na horizontal esta localizado no: B2-C2-D2\n\n");
    printf("navio que esta na vertical esta localizado no: H6-H7-H8\n\n");

    return 0;

}
     