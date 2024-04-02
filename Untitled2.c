#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int valores = 1, soma = 0, contador = 0;
	float media; 
	
	while(valores > 0) {
		printf("Digite um número: ");
		scanf("%i",&valores);
		
		if(valores > 0) {
			soma += valores;
			contador++;
		}
	}
	
	media = soma / (float) contador;
	
	printf("\n=== Exibindo resultados ===\n");
	if(contador == 0) {
		printf("Não foram inseridos números positivos. \n");
	} else {
		printf("Média: %.1f \n", media);
	}
	
	return 0;
}
