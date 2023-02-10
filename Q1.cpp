#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
	
	int n, i;
	int num[10];
	int min_index = 0, max_index = 0;
  
  	for (i = 0; i < 10; i++) {
		printf("Digite o %dº número: ", i + 1);
   	 	scanf("%d", &num[i]);
  	}

  	for (i = 1; i < 10; i++) {
    	if (num[i] < num[min_index]) {
      	min_index = i;
    }
    if (num[i] > num[max_index]) {
      	max_index = i;
    }
  }

	printf("\nMenor valor: %d (índice %d)\n", num[min_index], min_index+1);
	printf("Maior valor: %d (índice %d)\n", num[max_index], max_index+1);

  	return 0;
}

