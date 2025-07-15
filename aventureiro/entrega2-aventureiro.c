#include <stdio.h> 
// Declaração de macro do tamanho do navio e dimensões do tabuleiro
#define TAM_NAVIO 3
#define TAM_TABULEIRO 10

void impressao_tabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]);

int main(){
    // Declaração das variáveis do tabuleiro e navio
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};
    int navio_h[TAM_NAVIO] = {3, 3, 3};
    int navio_v[TAM_NAVIO] = {3, 3, 3};
    int navio_d1[TAM_NAVIO] = {3, 3, 3};
    int navio_d2[TAM_NAVIO] = {3, 3, 3};
    // Declaração da posição dos navios
    int linha_h = 0, coluna_h = 0;
    int linha_v = 2, coluna_v = 3;

    // Verificação da posição do navio horizontal no tamanho do tabuleiro
    if(linha_h + TAM_NAVIO <= TAM_TABULEIRO && coluna_h + TAM_NAVIO <= TAM_TABULEIRO){
        // Posicionamento do navio horizontal
        for(int i=0;i<TAM_NAVIO;i++){
            tabuleiro[linha_h][coluna_h + i] = navio_h[i];
        }
    }else{
        printf("Posição do navio horizontal extrapola tamanho do tabuleiro.");
    }

    // Verificação da posição do navio vertical no tamanho do tabuleiro
    if(linha_v + TAM_NAVIO <= TAM_TABULEIRO){
        // Posicionamento do navio vertical
        for(int i=0;i<TAM_NAVIO;i++){
            // Verificação de sobreposição
            if(tabuleiro[linha_v + i][coluna_v] == 0){
                tabuleiro[linha_v + i][coluna_v] = navio_v[i];
            }else{
                printf("Sobreposição de navios detectada.\n");
                break;
            }
        }
    }else{
        printf("Posição do navio vertical extrapola tamanho do tabuleiro.");
    }

    // Declaração de navio diagonal nordeste
    int linha_d1=6, coluna_d1=6;
    
    // Verificação do encaixe do navio no tabuleiro
    if (linha_d1 + TAM_NAVIO <= TAM_TABULEIRO && coluna_d1 + TAM_NAVIO <= TAM_TABULEIRO){
        for (int i=0;i < TAM_NAVIO;i++){
            // Verificação de sobreposição
            if(tabuleiro[linha_d1 + i][coluna_d1 + i] == 0){
                tabuleiro[linha_d1 + i][coluna_d1 + i] = navio_d1[i];
            }else {
                printf("Sobreposição de navios detectada.");
            }

        }
    }

    // Declaração do navio diagonal (noroeste para sudeste invertido)
    int linha_d2 = 8, coluna_d2 = 5;

    // Verifica se há espaço para subir na linha e ir à direita na coluna
    if (linha_d2 - (TAM_NAVIO - 1) >= 0 && coluna_d2 + (TAM_NAVIO - 1) < TAM_TABULEIRO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            int l = linha_d2 - i;
            int c = coluna_d2 + i;
                if (tabuleiro[l][c] == 0) {
                    tabuleiro[l][c] = navio_d2[i];
                } else {
                    printf("Sobreposição de navios detectada.\n");
                    break;
                }
        }
    }else {
            printf("Posição do navio diagonal (d2) extrapola tamanho do tabuleiro.\n");
    }

    impressao_tabuleiro(tabuleiro);

    return 0;
}

void impressao_tabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]){

    // Impressão do tabuleiro
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}