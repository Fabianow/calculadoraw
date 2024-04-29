#include<stdio.h>
#include<stdlib.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        return 0;
    } else {
        return a / b;
    }
}

// Função para ler um número do usuário
float lerNumero() {
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    return numero;
}

// Função para ler um operador do usuário
char lerOperador() {
    char operador;
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operador);
    return operador;
}

int main() {
    char continuar = 's';
    
    do {
        float numero1 = lerNumero();
        float numero2 = lerNumero();
        char operador = lerOperador();
   
        switch (operador) {
            case '+':
                printf("Resultado: %.2f\n", soma(numero1, numero2));
                break;
            case '-':
                printf("Resultado: %.2f\n", subtracao(numero1, numero2));
                break;
            case '*':
                printf("Resultado: %.2f\n", multiplicacao(numero1, numero2));
                break;
            case '/':
                printf("Resultado: %.2f\n", divisao(numero1, numero2));
                break;
            default:
                printf("Operador invalido!\n");
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');
    
    printf("Encerrando a calculadora.\n");

    return 0;
}

