#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int num_inicial, razao, i;
    int PG[10];

    printf("Digite o n�mero inicial da PG: ");
    scanf("%d", &num_inicial);

    printf("\nDigite a raz�o da PA: ");
  	scanf("%d", &razao);

    PG[0] = num_inicial;
    
    for (i = 1; i < 10; i++) {
        PG[i] = PG[i-1] * razao;
    }

    printf("\nOs termos da PG s�o: \n");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", PG[i]);
    }
    printf("\n");

    return 0;
}

