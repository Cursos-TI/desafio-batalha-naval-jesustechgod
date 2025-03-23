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

    //HABILIDADDE CONE
        for (int x = 0; x <= LINHAS ; x++){
            for (int y = 0  ; y <= COLUNAS; y++){
                if ((x == 7 && y == 2) || (x == 8 && y == 1) || (x == 8 && y == 2) ||//condicionais: que se uma determinada matriz aparecer ira tranformala em 5 
                (x == 8 && y == 3) || (x == 9 && y == 0) || (x == 9 && y == 1) ||
                (x == 9 && y == 2) || (x == 9 && y == 3) || (x == 9 && y == 4)){
                    tabuleiro[x][y] = 5;
                }
            }
        }        
    //HABILIDADDE CRUZ   
        for (int x = 0; x <= LINHAS ; x++){
            for (int y = 0  ; y <= COLUNAS; y++){
                if ((x == 3 && y == 6) || (x == 4 && y == 4) || (x == 4 && y == 5) ||//condicionais: que se uma determinada matriz aparecer ira tranformala em 5 
                (x == 4 && y == 6) || (x == 4 && y == 7) || (x == 4 && y == 8) ||
                (x == 5 && y == 6)){
                    tabuleiro[x][y] = 5;
                }
            }
        } 
    //HABILIDADDE OCTAEDRO
    for (int x = 0; x <= LINHAS ; x++){
        for (int y = 0  ; y <= COLUNAS; y++){
            if ((x == 0 && y == 5) || (x == 1 && y == 4) || (x == 1 && y == 5) ||//condicionais: que se uma determinada matriz aparecer ira tranformala em 5 
            (x == 1 && y == 6) || (x == 2 && y == 5)){
                tabuleiro[x][y] = 5;
            }
        }
    }    
    printf("\nTABULEIRO COM OS NAVIOS E AS HABILIDADES:\n\n");

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
    
    printf("a habilidade octaedro esta localizado no: F1-E2-F2-G2-F3\n\n");
    printf("a habilidade cruz esta localizado no: G4-E5-F5-G5-H5-I5-G6\n\n");
    printf("a habilidade cone esta localizado no: C8-B9-C9-D9-A10-B10-C10-D10-E10\n\n");

    return 0;

}