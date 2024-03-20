#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	if (idade >= 18 && idade <= 65) {
		printf("\nÉ obrigado a votar.");
	} else {
		printf("\nNão é obrigado a votar.");	
	}
	
	return 0;
		
}
