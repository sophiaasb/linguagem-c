#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int i, numero;
	
	printf("Digite um n�mero: ");
	scanf("%i", &numero);
	
printf("\nTabuada de multiplica��o do n�mero %d\n", numero);
for(i = 1; i <= 10; i++) {
printf("%d x %d = %d \n", numero, i, i*numero);
	}
	
	return 0;
}
