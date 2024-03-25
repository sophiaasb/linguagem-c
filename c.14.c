#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "");
	
	char sexo;
	float altura, pesoIdeal;
	
	printf("Informe o sexo - M ou F: ");
	scanf("%c",&sexo);
	
	printf("Infome a altura: ");
	scanf("%f",&altura);
	
	sexo = toupper(sexo);
	
	switch(sexo) {
		case 'M':
			pesoIdeal = (72.7 * altura) - 58;
			break;
		case 'F':
			pesoIdeal = (62.1 * altura) - 44.7;
			break;
		default:
			printf("Opção inválida!");
	}
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Peso ideal: %.2f \n", pesoIdeal);
	
	return 0;
}
