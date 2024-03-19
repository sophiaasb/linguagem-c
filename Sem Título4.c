#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int numeroUm, numeroDois, soma, produto;
	int maiorValor, menorValor;
	float media;
	
	printf("Digite o primeiro numero: ");
	scanf("%i",&numeroUm);
	
	printf("Digite o segundo numero: ");
	scanf("%i",&numeroDois);
	
	soma =  numeroUm + numeroDois;
	produto = numeroUm * numeroDois;
	media = (numeroUm + numeroDois) /2;
	// media = soma / (float) 2;
	
	if (numeroUm > numeroDois) {
	maiorValor = numeroUm;
	menorValor = numeroDois;
	} else {
	maiorValor = numeroDois;
	menorValor = numeroUm;
	}
	
	printf("\n=== Exibindo resultados === \n");
	printf("Primeiro numero: %i \n", numeroUm);
	printf("Segundo numero: %i \n\n", numeroDois);
	printf("Soma: %i \n", soma);
	printf("Produto: %i \n", produto);
	printf("Media: %.1f \n\n", media);
	
	if (numeroUm == numeroDois) {
	printf("Os números são iguais.");
	} else { 
	printf("Maior valor: %i \n", maiorValor);
	printf("Menor valor: %i \n", menorValor);
	}

    return 0;
}

