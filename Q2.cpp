#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
	
  	int n, i;
  	int num[10];
  	int min, max;
 
  	for (i = 0; i < 10; i++) {
    	printf("Digite o %dº número: ", i + 1);
    	scanf("%d", &num[i]);
  	}

 	min = num[0];
  	max = num[0];

  	for (i = 1; i < 10; i++) {
    	if (num[i] < min) {
      	min = num[i];
    }
    if (num[i] > max) {
      max = num[i];
    }
  }

  	printf("\nMenor valor: %d\n", min);
  	printf("Maior valor: %d\n", max);

  	return 0;
}

