#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios

    // Declaração do tabuleiro 10x10 e inicialização com zeros (água)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando dois navios de tamanho 3
    // Um navio será horizontal, o outro vertical

    // Coordenadas iniciais do navio horizontal (linha, coluna)
    int linhaH = 2;
    int colunaH = 4;

    // Verificação se cabe no tabuleiro
    if (colunaH + 2 < 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
            printf("Navio horizontal em: (%d, %d)\n", linhaH, colunaH + i);
        }
    }

    // Coordenadas iniciais do navio vertical (linha, coluna)
    int linhaV = 5;
    int colunaV = 7;

    // Verificação se cabe e se não há sobreposição
    int podeColocar = 1;
    if (linhaV + 2 < 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                podeColocar = 0;
            }
        }

        if (podeColocar) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linhaV + i][colunaV] = 3;
                printf("Navio vertical em: (%d, %d)\n", linhaV + i, colunaV);
            }
        }
    }

    // Exibição do tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

