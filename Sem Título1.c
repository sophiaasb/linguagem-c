#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float notas, soma, media;
	int i;
	
	for(i = 1; i <= 3; i++) {
		printf("Digite a %iª nota: ", i);
		scanf("%f",&notas);
		
		soma = soma + notas;
		
	}
		 
	media = soma / 3;

    system("cls || clear");
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Média %.1f \n", media);
	
	if (media <= 4) {
   	printf("Reprovado.");
   } else {
   	printf("Aprovado.");
   }
	
	getchar();
	
	return 0;
}
