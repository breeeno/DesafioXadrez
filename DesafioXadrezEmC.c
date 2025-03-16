#include <stdio.h>

void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Direita Superior\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}


void moverCavalo() {
    int i, j;
    printf("Movimentação do Cavalo (em L - cima/direita):\n");
    for (i = 0; i < 2; i++) {  
        printf("Cima\n");
    }
    for (j = 0; j < 1; j++) {  
        printf("Direita\n");
    }
}

void moverCavaloAventureiro() {
    int i, j = 0;
    printf("\nMovimentação do Cavalo (em L - baixo/esquerda):\n");
    for (i = 0; i < 2; i++) {  
    }
    while (j < 1) { 
        printf("Esquerda\n");
        j++;
    }
}


void moverBispoLoop() {
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Diagonal Direita Superior\n");
    }
}

void moverTorreLoop() {
    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    int i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }
}

void moverRainhaLoop() {
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
}


int main() {
    printf("----- Desafio Xadrez MateCheck -----\n\n");

    printf("=== Nível Novato ===\n");
    moverBispoLoop();
    moverTorreLoop();
    moverRainhaLoop();

    printf("\n=== Nível Aventureiro ===\n");
    moverCavaloAventureiro();

    printf("\n=== Nível Mestre ===\n");
    printf("\nMovimentação do Bispo (Função Recursiva):\n");
    moverBispo(5);

    printf("\nMovimentação da Torre (Função Recursiva):\n");
    moverTorre(5);

    printf("\nMovimentação da Rainha (Função Recursiva):\n");
    moverRainha(8);

    printf("\nMovimentação do Cavalo (Loop Aninhado):\n");
    moverCavalo();

    printf("\n----- Fim do Desafio -----\n");

    return 0;
}