#include <stdio.h>

// Definições
#define TAM 10
#define AGUA 0
#define NAVIO 3
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM] = {0};  // Inicializa com AGUA
    char colunas[TAM] = {'A','B','C','D','E','F','G','H','I','J'};

    // Vetores representando os navios (horizontal e vertical)
    int navio1[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio2[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};

    // Coordenadas de início dos navios
    int linhaNavio1 = 2;    // linha 3 (índice 2)
    int colunaNavio1 = 4;   // coluna 'E' (índice 4)

    int linhaNavio2 = 5;    // linha 6 (índice 5)
    int colunaNavio2 = 7;   // coluna 'H' (índice 7)

    // Posiciona navio1 (horizontal)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i];
    }

    // Posiciona navio2 (vertical)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
    }

    // Título
    printf("\n        BATALHA NAVAL\n\n");

    // Cabeçalho das colunas (A a J)
    printf("   ");
    for (int col = 0; col < TAM; col++) {
        printf(" %c ", colunas[col]);
    }
    printf("\n");

    // Impressão do tabuleiro
    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}