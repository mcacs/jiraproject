#include <stdio.h>

// Função para realizar a adição
float adicao(float a, float b) {
    return a + b;
}

// Função para realizar a subtração
float subtracao(float a, float b) {
    return a - b;
}

// Função para realizar a multiplicação
float multiplicacao(float a, float b) {
    return a * b;
}

// Função para realizar a divisão
float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0.0;
    }
}