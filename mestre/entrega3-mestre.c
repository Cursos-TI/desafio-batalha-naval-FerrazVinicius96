#include <stdio.h>

// Constantes
#define TAM_NAVIO 3
#define TAM_TABULEIRO 10

// Protótipos
void impressao_tabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]);
int posicionar_navio_horizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna);
int posicionar_navio_vertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna);
int posicionar_navio_diagonal_principal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna);
int posicionar_navio_diagonal_invertida(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna);

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Navios
    int navio_h[TAM_NAVIO]  = {3, 3, 3};
    int navio_v[TAM_NAVIO]  = {3, 3, 3};
    int navio_d1[TAM_NAVIO] = {3, 3, 3};
    int navio_d2[TAM_NAVIO] = {3, 3, 3};

    // Posições
    int linha_h = 0, coluna_h = 0;
    int linha_v = 2, coluna_v = 3;
    int linha_d1 = 6, coluna_d1 = 6;
    int linha_d2 = 8, coluna_d2 = 5;

    // Tentativas de posicionamento
    if (!posicionar_navio_horizontal(tabuleiro, navio_h, linha_h, coluna_h))
        printf("Erro ao posicionar navio horizontal.\n");

    if (!posicionar_navio_vertical(tabuleiro, navio_v, linha_v, coluna_v))
        printf("Erro ao posicionar navio vertical.\n");

    if (!posicionar_navio_diagonal_principal(tabuleiro, navio_d1, linha_d1, coluna_d1))
        printf("Erro ao posicionar navio diagonal ↘.\n");

    if (!posicionar_navio_diagonal_invertida(tabuleiro, navio_d2, linha_d2, coluna_d2))
        printf("Erro ao posicionar navio diagonal ↗.\n");

    // Exibe o tabuleiro final
    impressao_tabuleiro(tabuleiro);

    return 0;
}

// Função para imprimir o tabuleiro
void impressao_tabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Horizontal: →
int posicionar_navio_horizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna) {
    if (coluna + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linha][coluna + i] != 0) return 0; // sobreposição
        }
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha][coluna + i] = navio[i];
        }
        return 1;
    }
    return 0;
}

// Vertical: ↓
int posicionar_navio_vertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna) {
    if (linha + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] != 0) return 0; // sobreposição
        }
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna] = navio[i];
        }
        return 1;
    }
    return 0;
}

// Diagonal principal: ↘
int posicionar_navio_diagonal_principal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna) {
    if (linha + TAM_NAVIO <= TAM_TABULEIRO && coluna + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna + i] != 0) return 0; // sobreposição
        }
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna + i] = navio[i];
        }
        return 1;
    }
    return 0;
}

// Diagonal invertida: ↗ (subindo e indo para a direita)
int posicionar_navio_diagonal_invertida(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int navio[], int linha, int coluna) {
    if (linha - (TAM_NAVIO - 1) >= 0 && coluna + (TAM_NAVIO - 1) < TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            int l = linha - i;
            int c = coluna + i;
            if (tabuleiro[l][c] != 0) return 0; // sobreposição
        }
        for (int i = 0; i < TAM_NAVIO; i++) {
            int l = linha - i;
            int c = coluna + i;
            tabuleiro[l][c] = navio[i];
        }
        return 1;
    }
    return 0;
}