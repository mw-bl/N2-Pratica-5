#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
    int num[10], num_digitado, i, encontrado = 0;

    for (i = 0; i < 10; i++) {
        num[i] = rand() % 50 + 1;
        //a fan��o rand() % 50 + 1, gera 10 n�meros aleat�rios entre 1 e 50.
    }

    printf("Os n�meros foram sorteados... ");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
        //N�o entendi se os n�meros sorteados podiam ficar vis�veis ou n�o para o usu�rio, ent�o deixei eles vis�veis.
    }
    printf("\n");

    printf("\nDigite um n�mero: ");
    scanf("%d", &num_digitado);

    for (i = 0; i < 10; i++) {
        if (num[i] == num_digitado) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("\nO n�mero %d foi encontrado na posi��o %d do vetor.\n", num_digitado, i + 1);
    } else {
        printf("\nO n�mero %d n�o foi encontrado no vetor.\n", num_digitado);
    }

    return 0;
}

