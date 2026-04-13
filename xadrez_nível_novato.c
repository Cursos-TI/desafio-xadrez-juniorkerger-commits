// Desafio: nível novato
//  Objetivo: Imprimir os movimentos de peças de xadrez usando estruturas de repetição (FOR, WHILE, DO-WHILE).
//  Peças: Torre, Bispo, Rainha
//  Movimentos:
//  - Torre: Move 5 casas para a direita (usando FOR)
//  - Bispo: Move 5 casas na diagonal (cima + direita) (usando WHILE)
//  - Rainha: Move 8 casas para a esquerda (usando DO-WHILE)
//  Dica: Use printf para mostrar os movimentos no console.
//  Exemplo de saída esperada:
//  Movimento da Torre:
//  Direita
//  Direita
//  Direita
//  Direita
//  Direita
//  Movimento do Bispo:
//  Cima, Direita
//  Cima, Direita
//  Cima, Direita
//  Cima, Direita
//  Cima, Direita
//  Movimento da Rainha:
//  Esquerda
//  Esquerda        
//  Esquerda
//  Esquerda
//  Esquerda
//  Esquerda
//  Esquerda
//  Esquerda
//  Esquerda
//  Esquerda
    

#include <stdio.h>

int main() {

    // =========================
    // TORRE (usando FOR)
    // Move 5 casas para a direita
    // =========================
    printf("Movimento da Torre:\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }


    // =========================
    // BISPO (usando WHILE)
    // Move 5 casas na diagonal (cima + direita)
    // =========================
    printf("\nMovimento do Bispo:\n");

    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }


    // =========================
    // RAINHA (usando DO-WHILE)
    // Move 8 casas para a esquerda
    // =========================
    printf("\nMovimento da Rainha:\n");

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);


    return 0;
}