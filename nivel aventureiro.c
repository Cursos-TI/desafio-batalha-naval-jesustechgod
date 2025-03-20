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
    for (int x = 1; x < 2; x++){
        for (int y = 1; y < 4; y++){
            tabuleiro[x][y]=3;
        }
    }
    //NAVIO NA VERTICAL
    for (int y = 7; y < 8; y++){
        for (int x = 5; x < 8; x++){
            tabuleiro[x][y]=3;
        }
    }
    //NAVIO NA DIAGONAL PRINCIPAL
    for (int x = 4; x < 7; x++){
        for (int y = x-1; y < x ; y++){
            tabuleiro[x][y]=3;
        }
    }
    //NAVIO NA DIAGONAL SEGUNDARIA
        for (int x = 0; x < 3 ; x++){
            for (int y = 9 - x ; y > 9 - x - 1 ; y--){
                tabuleiro[x][y]=3;
            }
        }    

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
    printf("navio que esta na diagonal principal esta localizado no: D5-E6-F7\n\n");
    printf("navio que esta na diagonal segundaria esta localizado no: H3-I2-J1\n\n");

    return 0;

}
     