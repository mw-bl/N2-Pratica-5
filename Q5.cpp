#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
    int num[10], num_digitado, i, encontrado = 0;

    for (i = 0; i < 10; i++) {
        num[i] = rand() % 50 + 1;
        //a fanção rand() % 50 + 1, gera 10 números aleatórios entre 1 e 50.
    }

    printf("Os números foram sorteados... ");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
        //Não entendi se os números sorteados podiam ficar visíveis ou não para o usuário, então deixei eles visíveis.
    }
    printf("\n");

    printf("\nDigite um número: ");
    scanf("%d", &num_digitado);

    for (i = 0; i < 10; i++) {
        if (num[i] == num_digitado) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("\nO número %d foi encontrado na posição %d do vetor.\n", num_digitado, i + 1);
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", num_digitado);
    }

    return 0;
}

