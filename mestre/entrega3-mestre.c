#include <stdio.h>

// Constantes
#define TAM_TAB 10
#define TAM_NAVIO 3
#define LINHA_HAB 3
#define COLUNA_HAB 5

// Protótipos
void impressao_tabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]);
int posicionar_navio_horizontal(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna);
int posicionar_navio_vertical(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna);
int posicionar_navio_diagonal_principal(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna);
int posicionar_navio_diagonal_invertida(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna);
void aplicar_habilidade(int tabuleiro[TAM_TAB][TAM_TAB], int habilidade[LINHA_HAB][COLUNA_HAB], int linha, int coluna, int marcador);

int main() {
    // == Tabuleiro ==
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};

    // == Navios ==
    int navio_h[TAM_NAVIO]  = {3, 3, 3};
    int navio_v[TAM_NAVIO]  = {3, 3, 3};
    int navio_d1[TAM_NAVIO] = {3, 3, 3};
    int navio_d2[TAM_NAVIO] = {3, 3, 3};

    // == Habilidades ==
    int hab_cone[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    int hab_cruz[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    int hab_octaedro[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // == Posicionamento dos navios ==
    if (!posicionar_navio_horizontal(tabuleiro, navio_h, 0, 0))
        printf("Erro ao posicionar navio horizontal.\n");

    if (!posicionar_navio_vertical(tabuleiro, navio_v, 2, 3))
        printf("Erro ao posicionar navio vertical.\n");

    if (!posicionar_navio_diagonal_principal(tabuleiro, navio_d1, 6, 6))
        printf("Erro ao posicionar navio diagonal ↘.\n");

    if (!posicionar_navio_diagonal_invertida(tabuleiro, navio_d2, 8, 5))
        printf("Erro ao posicionar navio diagonal ↗.\n");

    // == Aplicação das habilidades ==
    aplicar_habilidade(tabuleiro, hab_cone, 4, 4, 9);
    aplicar_habilidade(tabuleiro, hab_cruz, 0, 4, 8);
    aplicar_habilidade(tabuleiro, hab_octaedro, 3, 2, 7);

    // == Impressão final ==
    printf("\n=== Tabuleiro Final ===\n\n");
    impressao_tabuleiro(tabuleiro);

    return 0;
}

// ===== Funções de Utilidade =====

void impressao_tabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicar_habilidade(int tabuleiro[TAM_TAB][TAM_TAB], int habilidade[LINHA_HAB][COLUNA_HAB], int linha, int coluna, int marcador) {
    if (linha + LINHA_HAB <= TAM_TAB && coluna + COLUNA_HAB <= TAM_TAB) {
        for (int i = 0; i < LINHA_HAB; i++) {
            for (int j = 0; j < COLUNA_HAB; j++) {
                if (habilidade[i][j] == 1)
                    tabuleiro[linha + i][coluna + j] = marcador;
            }
        }
    }
}

// ===== Funções de Posicionamento =====

int posicionar_navio_horizontal(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna) {
    if (coluna + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++)
            if (tabuleiro[linha][coluna + i] != 0) return 0;
        for (int i = 0; i < TAM_NAVIO; i++)
            tabuleiro[linha][coluna + i] = navio[i];
        return 1;
    }
    return 0;
}

int posicionar_navio_vertical(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna) {
    if (linha + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++)
            if (tabuleiro[linha + i][coluna] != 0) return 0;
        for (int i = 0; i < TAM_NAVIO; i++)
            tabuleiro[linha + i][coluna] = navio[i];
        return 1;
    }
    return 0;
}

int posicionar_navio_diagonal_principal(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna) {
    if (linha + TAM_NAVIO <= TAM_TAB && coluna + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++)
            if (tabuleiro[linha + i][coluna + i] != 0) return 0;
        for (int i = 0; i < TAM_NAVIO; i++)
            tabuleiro[linha + i][coluna + i] = navio[i];
        return 1;
    }
    return 0;
}

int posicionar_navio_diagonal_invertida(int tabuleiro[TAM_TAB][TAM_TAB], int navio[], int linha, int coluna) {
    if (linha - (TAM_NAVIO - 1) >= 0 && coluna + (TAM_NAVIO - 1) < TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++)
            if (tabuleiro[linha - i][coluna + i] != 0) return 0;
        for (int i = 0; i < TAM_NAVIO; i++)
            tabuleiro[linha - i][coluna + i] = navio[i];
        return 1;
    }
    return 0;
}