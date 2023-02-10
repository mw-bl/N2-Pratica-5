#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
	
  	int num_inicial, razao, i;
  	int PA[10];

  	printf("Digite o número inicial da PA: ");
  	scanf("%d", &num_inicial);

  	printf("\nDigite a razão da PA: ");
  	scanf("%d", &razao);

  	for (i = 0; i < 10; i++) {
    	PA[i] = num_inicial + i * razao;
  	}
  	printf("\nTermos da PA: ");
  	
  	for (i = 0; i < 10; i++) {
    	printf("%d   ", PA[i]);
  	}

  	return 0;
}

