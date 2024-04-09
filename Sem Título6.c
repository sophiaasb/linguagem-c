#include <stdio.h>
#include <locale.h> 
#define TAM 4

int main() {
	setlocale(LC_ALL, "");
	
	float notas[TAM], soma = 0, media;
	int i;
	
	printf("Digite as tr�s notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Digite a %d� nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}
	
	media = soma / (float) TAM;
	
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d� nota: %.1f \n", i+1, notas[i]);
	}
	
	printf("\nM�dia: %.1f \n", media);
	
	if (media >= 7) printf("\nAprovado!");
    if (media < 7) printf("\nEm recupera��o.");
    if (media < 5) printf("\nReprovado.");
	
	return 0;
}
