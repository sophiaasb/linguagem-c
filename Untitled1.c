#include <stdio.h>

int main() {
	// Declarando vari�veis.
	float primeiroNumero, segundoNumero
	float soma, subtracao, multiplicacao, divisao
	
	// Solicitando dados para o usu�rio.
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &segundoNumero);
	
	// Realizar c�lculos.
	soma = primeiroNumero + segundoNumero
    subtracao = primeiroNumero - segundoNumero
    multiplicacao = primeiroNumero * segundoNumero
    divisao = primeiroNumero / segundoNumero
	
	fflush(stdin); // Limpa o cache de input.
	
	// Exibindo resultados.
	printf("\n=== Exibindo resultados ===\n)");
	printf("Primeiro n�mero: %f", primeiroNumero)
    printf("Segundo n�mero: %f", segundoNumero)
    printf("Soma: %f", soma)
    printf("Subtra��o: %f", subtracao)
    printf("Multiplica��o: %f", multiplicacao)
    printf("Divis�o: %f", divisao)
    
    getchar();
    
    return 0;
}
