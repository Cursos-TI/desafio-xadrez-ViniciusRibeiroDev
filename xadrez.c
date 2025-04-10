#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacaoBispo(int num) {
    if(num > 0) {
        printf("Cima\n");
        printf("Esquerda\n");

        movimentacaoBispo(num - 1);
    }
}

void movimentacaoTorre(int num) {
    if(num > 0) {
        printf("Direita\n");

        movimentacaoTorre(num - 1);
    }
}

void movimentacaoRainha(int num) {
    if(num > 0) {
        printf("Esquerda\n");
        
        movimentacaoRainha(num - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int numCasasBispo = 5, numCasasTorre = 5, numCasasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("***Movimento de Bispo.***\n");

    movimentacaoBispo(numCasasBispo);

    printf("Loop aninhado.\n");
    
    for(int i = 0; i < numCasasBispo; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("***Movimento da Torre.***\n");

    movimentacaoTorre(numCasasTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("***Movimento da Rainha.***\n");

    movimentacaoRainha(numCasasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("***Movimento do Cavalo.***");

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
