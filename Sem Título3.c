#include <stdio.h>

#define TAM 3

int main() {
	int vetor[TAM];
	int i;
	
	printf("Digite os elementos do vetor:\n");
	for (i = 0; i < 5; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nExibindo os elementos do vetor: \n");
	for (i = 0; i < TAM; i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	
	return 0;
}
