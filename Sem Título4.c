#include <stdio.h>
#define TAM 3

int main() {
	int notas[TAM];
	int i;
	
	printf("Digite as notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf("%d", &notas[i]);
	}
	
	printf("\nExibindo as notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: %d \n", i+1, notas[i]);
	}
	
	return 0;
}
