#include <stdio.h> 
// Declaração de macro do tamanho do navio e dimensões do tabuleiro
#define TAM_NAVIO 3
#define TAM_TABULEIRO 10

int main(){
    // Declaração das variáveis do tabuleiro e navio
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};
    int navio_h[TAM_NAVIO] = {3, 3, 3};
    int navio_v[TAM_NAVIO] = {3, 3, 3};
    // Declaração da posição dos navios
    int linha_h = 0, coluna_h = 0;
    int linha_v = 2, coluna_v = 3;
    // Verificação da posição no tamanho do tabuleiro e sobreposição
    if(linha_h + TAM_NAVIO <= TAM_TABULEIRO && coluna_h + TAM_NAVIO <= TAM_TABULEIRO){
        for(int i=0;i<TAM_TABULEIRO;i++){
            for (int j=0;j<TAM_TABULEIRO;j++){
                    printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    


    return 0;
}