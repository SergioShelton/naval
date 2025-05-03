#include <stdio.h>

int main(){
    int linha [10] = {1,2,3,4,5,6,7,8,9,10};
    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    int navio [3] = {3,3,3};

    printf("\n");

    printf("TABULEIRO\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++) {
                printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("POSIÇÃO DO NAVIO-HORIZONTAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++) {
            if (i == 2 && j > 2 && j < 6){
                printf("%2d", navio[0]);
            } else {
                printf("%2d", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("POSIÇÃO DO NAVIO-VERTICAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++) {
            if (i > 4 && i < 8 && j == 7){
                printf("%2d", navio[0]);
            } else {
                printf("%2d", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

return 0;
}