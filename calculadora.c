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

int main() {
    float num1, num2;
    char operador;

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", adicao(num1, num2));
            break;
        case '-':
            printf("Resultado: %.2f\n", subtracao(num1, num2));
            break;
        case '*':
            printf("Resultado: %.2f\n", multiplicacao(num1, num2));
            break;
        case '/':
            printf("Resultado: %.2f\n", divisao(num1, num2));
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
